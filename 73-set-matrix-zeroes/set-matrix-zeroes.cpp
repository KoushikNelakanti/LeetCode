class Solution {
public:
    void setRow(int index,vector<vector<int>>& matrix){
        int ele = -10101;
        for(int i = 0;i < matrix[index].size();i++){
            if(matrix[index][i]) matrix[index][i]=ele;
        }
    }
    void setColumn(int index,vector<vector<int>>& matrix){
        int ele = -10101;
        for(int i = 0;i < matrix.size();i++){
            if(matrix[i][index]) matrix[i][index]=ele;
        }
    }
    void setZeroes(vector<vector<int>>& matrix) {
        int ele = -10101;
        for(int i = 0;i < matrix.size();i++){
            for(int j = 0;j < matrix[i].size();j++){
                if(!matrix[i][j]){
                    setRow(i,matrix);
                    setColumn(j,matrix);
                }
            }
        }
        for(int i = 0;i < matrix.size();i++){
            for(int j = 0;j < matrix[i].size();j++){
                if(matrix[i][j]==ele){
                    matrix[i][j]=0;
                }
            }
        }
        
    }
};