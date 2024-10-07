class Solution {
public:
    unordered_map <int,int> mp;
    int getMin(int index,vector<int>& cost){
        if(index>=cost.size()) return 0;
        if(mp.find(index)!=mp.end()) return mp[index];
        mp[index]=cost[index]+min(getMin(index+1,cost),getMin(index+2,cost));
        return mp[index];
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int minCost = getMin(0,cost);
        minCost = min(minCost,getMin(1,cost));
        return minCost;
    }
};