class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long sum = 0,firstSum = 0,count = 0;
        for(int i = 0;i < nums.size();i++){
            sum+=nums[i];
        }
        for(int i = 0;i < nums.size()-1;i++){
            firstSum+=nums[i];
            sum-=nums[i];
            if(firstSum>=sum) count++;
        }
        return count;
    }
};