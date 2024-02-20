class Solution {
public:
    int missingNumber(vector<int>& nums) {
        vector<int> freq;
        freq.assign(nums.size()+1,0);
        for(int i = 0;i < nums.size();i++){
           freq[nums[i]]++;
        }
        for(int i = 0;i < nums.size();i++){
            if(freq[i]!=1) return i;
        }
        return nums.size();
    }
};