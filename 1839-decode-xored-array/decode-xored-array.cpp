class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> res;
        res.push_back(first);
        for(int i = 1;i <=encoded.size();i++){
           first = first^encoded[i-1];
           res.push_back(first);
           
        }
        return res;
    }
};