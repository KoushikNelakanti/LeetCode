class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        for(int i = 1;i < nums.size();i++){
            if(nums[i]==nums[i-1]){
                nums[i-1]*=2;
                nums[i]=0;
            }
        }
        vector<int> result;
        int zero  = 0;
        for(int i = 0;i <nums.size();i++){
            if(nums[i]) result.push_back(nums[i]);
            else zero++;
        }
        for(int i = 0;i < zero;i++){
            result.push_back(0);
        }

        return result;
    }
};