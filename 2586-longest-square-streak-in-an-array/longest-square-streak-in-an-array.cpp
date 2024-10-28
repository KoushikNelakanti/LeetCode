class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        unordered_map<long long,int> mp;
        for(int i = 0;i < nums.size();i++){
            mp[nums[i]]++;
        }
        int result = -1;
        for(int i = 0;i < nums.size();i++){
            long long ele = nums[i];
            int count=0;
            while(mp[ele*ele]){
                ele = ele*ele;
                count++;
            }
            if(count) count++;
            result = max(result,count);
        }
        if(result>0) return result;
        else return -1;
    }
};