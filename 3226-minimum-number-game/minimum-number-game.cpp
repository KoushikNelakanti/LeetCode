class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       int i = 0,j = 1;
       vector<int> res;
       while(j<nums.size()){
        res.push_back(nums[j]);
        res.push_back(nums[i]);
        i+=2;
        j+=2;
       } 
       return res;
    }
};