class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i = 0,j = 0,zero = 0,mx=0;
        while(j!=nums.size()){
            if(nums[j]==0) zero++;
            while(zero>1){
                if(nums[i]==0) zero--;
                i++;
            }
            mx = max(mx,j-i);
            j++;
        }
        return mx;
    }
};