class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zero = 0,product=1;
        for(int i = 0;i < nums.size();i++){
            if(nums[i]==0) zero++;
            else product*=nums[i];
        }
        for(int i = 0 ;i < nums.size();i++){
            if(zero>1){
                nums[i]=0;
            }
            else if(nums[i]!=0 && zero){
                nums[i]=0;
            }
            else if(zero && nums[i]==0){
                nums[i]=product;
            }
            else if(nums[i]!=0){
                nums[i]=product/nums[i];
            }
        }
        return nums;
    }
};