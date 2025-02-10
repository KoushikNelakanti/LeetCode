class Solution {
public:
    bool isFound(int i,long long n,int cnt,vector<int> nums,vector<int> dp){
        // cout<<i<<" "<<n<<" "<<cnt<<endl;
        if(cnt>=3) return true;
        if(i<0) return false;
        if(dp[i]!=-1) return dp[i];
        int pick = 0,notPick = 0;
        int t = n;
        notPick = isFound(i-1,n,cnt,nums,dp);
        if(n>nums[i]){
            cnt++;
            n = nums[i];
            pick = isFound(i-1,n,cnt,nums,dp);
        }
        dp[i] = pick || notPick;
        return dp[i];
        }

    bool increasingTriplet(vector<int>& nums) {
      int first_num = INT_MAX,second_num = INT_MAX;
      for(int i = 0;i < nums.size();i++){
        if(nums[i]<=first_num) first_num = nums[i];
        else if(nums[i]<=second_num) second_num = nums[i];
        else return true;
      }
      return false;
    }
};