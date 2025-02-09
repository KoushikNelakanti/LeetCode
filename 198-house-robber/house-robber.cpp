class Solution {
public:
    int rob(vector<int>& nums) {
        int currmax = 0;
        vector<int> dp(nums.size(),-1);
        dp[0]=nums[0];
        int n = nums.size()-1;
        for(int i = 1;i < nums.size();i++){
        int pick = nums[i];
        if(i>1) pick+=dp[i-2];
        int notPick = dp[i-1];
        dp[i]= max(pick,notPick);
        }
        return dp[n];
    }
};