class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        unordered_map<int,int> mp;
        for(int i = 0;i < banned.size();i++){
            mp[banned[i]]++;
        }
        int count = 0,sum = 0;
        for(int i = 1;i<=n;i++){
            if(!mp[i] && sum+i<=maxSum){
                count++;
                sum+=i;
            }
        }
        return count;
    }
};