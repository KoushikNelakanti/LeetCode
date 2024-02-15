class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        vector<long long> leftSum;
        long long sum = 0;
        sort(nums.begin(),nums.end());
        for(int i = 0;i < nums.size();i++){
            leftSum.push_back(sum);
            sum+=nums[i];
        }
        for(int i = nums.size()-1;i>=0;i--){
            if(leftSum[i]>nums[i]) {
                cout<<leftSum[i-2]+nums[i-1]+nums[i];
                if(i-1>=0 && nums[i]<=nums[i-1]+leftSum[i-1]) return leftSum[i-1]+nums[i-1]+nums[i];
                else return leftSum[i];
            }
        }
        return -1;
    }
};