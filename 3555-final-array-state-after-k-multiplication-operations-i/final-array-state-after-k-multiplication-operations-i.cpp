class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        int min = 0;
        for(int i = 0;i < k;i++){
            min = 0;
            for(int j = 0;j < nums.size();j++){
                if(nums[j]<nums[min]) min = j;
            }
            nums[min]*=multiplier;
        }
        return nums;
    }
};