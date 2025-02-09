class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size()-1;
        int prev = nums[0],curr = 0,prev2 = 0;
        for(int i = 1;i < nums.size();i++){
        int pick = nums[i];
        if(i>1) pick+=prev2;
        int notPick = prev;
        curr= max(pick,notPick);
        prev2 = prev;
        prev = curr;
        }
        return prev;
    }
};