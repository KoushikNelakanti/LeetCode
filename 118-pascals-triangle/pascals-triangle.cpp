class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> mat;
        vector<int> res;
        res.push_back(1);
        mat.push_back(res);
        for(int i = 1;i <numRows;i++){
            vector<int> v;
            for(int j  = 0;j <=i;j++){
                int a = 0,b = 0;
                if((j-1)>=0) a = mat[i-1][j-1];
                if(j<(mat[i-1].size())) b = mat[i-1][j];
                cout<<a<<" "<<b<<endl;
                v.push_back(a+b);
            }
            mat.push_back(v);
        }
        return mat;
    }
};