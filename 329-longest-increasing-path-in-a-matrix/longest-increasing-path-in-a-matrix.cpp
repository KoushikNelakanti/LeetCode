class Solution {
public:
    bool isInvalid(int i,int j,vector<vector<int>>& mat){
        return (i<0 || j<0 || i>=mat.size() || j>=mat[i].size());
    }
    int getPathLength(int i,int j,vector<vector<int>>& matrix,vector<vector<int>>& mp){
        if(isInvalid(i,j,matrix)){
            return -1000;
        }
        if(mp[i][j]) return mp[i][j];
        int a = 1,b=1,c=1,d=1;
        if(!isInvalid(i+1,j,matrix) && matrix[i][j]<matrix[i+1][j]){
            a = 1+getPathLength(i+1,j,matrix,mp);
        }
        if(!isInvalid(i-1,j,matrix) && matrix[i][j]<matrix[i-1][j]){
            b = 1+getPathLength(i-1,j,matrix,mp);
        }
        if(!isInvalid(i,j+1,matrix) && matrix[i][j]<matrix[i][j+1]){
            c = 1+getPathLength(i,j+1,matrix,mp);
        }
        if(!isInvalid(i,j-1,matrix) && matrix[i][j]<matrix[i][j-1]){
            d = 1+getPathLength(i,j-1,matrix,mp);
        }
        mp[i][j]=max(a,max(b,max(c,d)));
        return mp[i][j];
    }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        vector<vector<int>> mp;
        for(int i = 0;i < matrix.size();i++){
            vector<int> v;
            for(int j = 0;j < matrix[i].size();j++){
                v.push_back(0);
            }
            mp.push_back(v);
        }
        int maxLen = 0;
        for(int i = 0;i < matrix.size();i++){
            for(int j = 0;j < matrix[i].size();j++){
                int len;
                if(!mp[i][j]) len = getPathLength(i,j,matrix,mp);
                else len = mp[i][j];
                maxLen = max(len,maxLen);
            }
        }
        return maxLen;
    }
};