class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int max = nums[0];
        for(int i = 0;i < nums.size();i++){
            if(nums[i]>max) max = nums[i];
        }
        int maxCount = 0,count = 0;
        for(int i = 0;i < nums.size();i++){
            if(max==nums[i]) count++;
            else {
                if(count>maxCount) maxCount = count;
                count = 0;
            }
        }
        if(count>maxCount) maxCount = count;
        return maxCount;
    }
};