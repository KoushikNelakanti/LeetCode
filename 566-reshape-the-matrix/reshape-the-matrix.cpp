class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        if((r*c)!=(mat.size()*mat[0].size())) return mat;
        vector<vector<int>> reshaped(r,vector<int>(c,0));
        vector<int> data;
        int x = 0,y = 0;
        for(int i = 0;i < mat.size();i++){
            for(int j = 0;j < mat[i].size();j++){
                if(y==c){
                    y=0;
                    x++;
                }
             reshaped[x][y] = mat[i][j];
             y++;
            }
        }
        return reshaped;
    }
};