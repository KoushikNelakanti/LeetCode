class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zero = 0,other = 0;
       for(int i = 0;i < nums.size();i++){
        if(nums[i]==0) zero++;
        else nums[other++]=nums[i];
       } 
       for(int i = 0;i < zero;i++){
        nums[other++]=0;
       }
    }
};