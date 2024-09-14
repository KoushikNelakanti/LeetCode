class Solution {
public:
    int getMax(vector<int> nums,int index,unordered_map <int,int>& mp){
        if(index>=nums.size()) return 0;
        if(mp.find(index)!=mp.end()) return mp[index];
        mp[index] = nums[index]+max(getMax(nums,index+2,mp),getMax(nums,index+3,mp));
        return mp[index];
    }
    int rob(vector<int>& nums) {
        unordered_map<int,int> mp;
       
       return max(getMax(nums,0,mp),getMax(nums,1,mp));
    }
};