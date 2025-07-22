class Solution {
public:
    bool isBoxesValid(vector<vector<char>> board){
        bool result;
        for(int i = 0;i<9;i+=3){
            for(int j = 0;j <9;j+=3){
            if(!isBoxValid(i,i+3,j,j+3,board)) return false;

            }
        }
        return true;
    }
    bool isBoxValid(int start1,int end1,int start2,int end2,vector<vector<char>> board){
        cout<<start1<<" "<<end1<<" "<<start2<<" "<<end2<<endl;
        bool result;
        vector<int> freq(10,0);
        for(int i = start1;i<end1;i++){
            for(int j=start2;j<end2;j++){
                if(board[j][i]<='9' && board[j][i]>='0'){
                    freq[board[j][i]%48]++;
                }
            }
        }
        for(int j = 0;j <=9;j++){
                if(freq[j]>1){
                   return false;
                }
            }
        return true;
    }
    bool isColValid(vector<vector<char>> board){
for(int i = 0;i < board.size();i++){
            vector<int> freq(10,0);
            for(int j = 0;j < board.size();j++){
                if(board[j][i]<='9' && board[j][i]>='0'){
                    freq[board[j][i]%48]++;
                }
            }
            for(int j = 0;j <=9;j++){
                if(freq[j]>1){
                   return false;
                }
            }
        }
        return true;

    }
    bool isRowValid(vector<vector<char>> board){
        for(int i = 0;i < board.size();i++){
            vector<int> freq(10,0);
            for(int j = 0;j < board.size();j++){
                if(board[i][j]<='9' && board[i][j]>='0'){
                    freq[board[i][j]%48]++;
                }
            }
            for(int j = 0;j <=9;j++){
                if(freq[j]>1){
                    return false;
                }
            }
        }
        return true;

    }
    bool isValidSudoku(vector<vector<char>>& board) {
        cout<<isRowValid(board)<<endl;
        cout<<isColValid(board)<<endl;
        cout<<isBoxesValid(board)<<endl;
        return isRowValid(board)&isColValid(board)&isBoxesValid(board);
    }
};