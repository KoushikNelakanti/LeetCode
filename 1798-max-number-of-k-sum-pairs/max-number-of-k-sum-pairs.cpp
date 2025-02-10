class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int i = 0;i < nums.size();i++){
            mp[nums[i]]++;
        }
        int count = 0;
        for(int i = 0;i < nums.size();i++){
            if(mp[k-nums[i]] && mp[nums[i]] && (k-nums[i])!=nums[i]){
                mp[nums[i]]--;
                mp[k-nums[i]]--;
                count++;
            }
            else if((k-nums[i])==nums[i] && mp[nums[i]]>1){
                mp[nums[i]]-=2;
                count++;
            }
        }
        return count;
    }
};