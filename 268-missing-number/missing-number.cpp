class Solution {
public:
    int missingNumber(vector<int>& nums) {
        vector<int> res(nums.size()+1,0);
        for(int i = 0;i < nums.size();i++){
            res[nums[i]]++;
        }
        for(int i = 0;i < nums.size()+1;i++){
            if(res[i]==0) return i;
        }
        return nums.size();
    }
};