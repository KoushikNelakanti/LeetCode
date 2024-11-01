class Solution {
public:
    bool check(vector<int>& nums) {
        if(nums.size()==1) return 1;
        int index = 1;
        while(index<nums.size() && nums[index-1]<=nums[index]) index++;
        if(index==nums.size()) return true;
        int ele = nums[index];
        for(int i = index+1;i<nums.size();i++){
            if(ele>nums[i]) return false;
            ele = nums[i];
        }
        for(int i = 0;i <index;i++){
             if(ele>nums[i]) return false;
            ele = nums[i];
        }
        return true;
    }
};