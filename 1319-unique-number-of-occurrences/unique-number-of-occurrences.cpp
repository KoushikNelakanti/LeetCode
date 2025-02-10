class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
       unordered_map<int,int> mp,mp2;
       for(int i = 0;i < arr.size();i++){
        mp[arr[i]]++;
       }
       unordered_map<int,int>::iterator it = mp.begin();
       while(it!=mp.end()){
        mp2[it->second]++;
        if(mp2[it->second]>1) return false;
        ++it;
       }
        return true;
    }
};