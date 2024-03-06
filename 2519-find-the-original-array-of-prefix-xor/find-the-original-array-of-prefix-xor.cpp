class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        int xorRes = pref[0];
        vector<int> res;
        res.push_back(pref[0]);
        for(int i  = 1;i < pref.size();i++){
            xorRes = pref[i-1]^pref[i];
            res.push_back(xorRes);
        }
        return res;
    }
};