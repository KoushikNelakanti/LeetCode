class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<vector<int>> result;
        unordered_map<int,int> mp;
        for(int i = 0;i < nums1.size();i++){
            mp[nums1[i][0]]=nums1[i][1];
        }
        for(int i = 0;i < nums2.size();i++){
            if(mp[nums2[i][0]]){
                mp[nums2[i][0]]+=nums2[i][1];
            }
            else{
                mp[nums2[i][0]] = nums2[i][1];
            }
        }
        unordered_map<int,int>::iterator it = mp.begin();
        while(it!=mp.end()){
            vector<int> v;
            v.push_back(it->first);
            v.push_back(it->second);
            result.push_back(v);
            ++it;
        }
        sort(result.begin(),result.end());
        return result;

    }
};