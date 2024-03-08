class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map <int,int> mp;
        for(int i = 0;i < nums.size();i++){
            mp[nums[i]]++;
        }
        unordered_map <int,int>::iterator it=mp.begin();
        int max = 0;
        while(it!=mp.end()){
            if(it->second>max) max = it->second;
            ++it;
        }
        it = mp.begin();
        int count = 0;
        while(it!=mp.end()){
            if(it->second==max) count++;
            ++it;
        }
        return count*max;
    }
};