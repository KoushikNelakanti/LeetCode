class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp,mp2;
        for(int i = 0;i < nums1.size();i++){
            mp[nums1[i]]++;
        }
        vector<int> dictNum1,dictNum2;
        for(int i = 0;i < nums2.size();i++){
            if(mp[nums2[i]]==0){
                dictNum1.push_back(nums2[i]);
                mp[nums2[i]]=1;
            }
            mp2[nums2[i]]++;
        }
        for(int i = 0;i < nums1.size();i++){
            if(mp2[nums1[i]]==0){
                dictNum2.push_back(nums1[i]);
                mp2[nums1[i]]=1;
            }
        }
        vector<vector<int>> res;
        res.push_back(dictNum2);
        res.push_back(dictNum1);
        return res;
    }
};