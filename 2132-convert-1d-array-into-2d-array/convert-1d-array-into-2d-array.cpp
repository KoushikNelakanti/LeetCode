class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> mat;
        if((m*n)!=original.size()) return mat;
        int ind = 0;
        for(int i = 0;i < m;i++){
            vector<int> v;
            int count=n;
            while(count--){
                v.push_back(original[ind++]);
            }
            mat.push_back(v);
        }
        return mat;
    }
};