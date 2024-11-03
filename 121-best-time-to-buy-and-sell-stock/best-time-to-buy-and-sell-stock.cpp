class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int> maxPrice;
        int mx = 0;
        for(int i = prices.size()-1;i>=0;i--){
            maxPrice.push_back(mx);
            if(mx<prices[i]) mx = prices[i];
        }
        mx = 0;
        for(int i = 0; i < prices.size();i++){
            mx = max(mx,maxPrice[maxPrice.size()-1-i]-prices[i]);
        }
        return mx;

    }
};