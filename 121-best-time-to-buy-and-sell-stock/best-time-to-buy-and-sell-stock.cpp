class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int> nextMax;
        int currMax = -1;
        for(int i = prices.size()-1;i>=0;i--){
            nextMax.push_back(currMax);
            currMax = max(currMax,prices[i]);
        }
        reverse(nextMax.begin(),nextMax.end());
        int result = 0;
        for(int i = 0;i < prices.size();i++){
            result = max(result,nextMax[i]-prices[i]);
        }
        return result;
    }
};