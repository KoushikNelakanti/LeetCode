class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int x = 0,y = 0;
        for(int i = 0;i < board.size();i++){
            for(int j = 0;j < board[i].size();j++){
                if(board[i][j]=='R'){
                    x = i;
                    y = j;
                    break;
                }
            }
        }
        int top = 0;
        int i = x,j = y;
        while(i>=0){
            if(board[i][j]=='p'){
                top=1;
                break;
            }
            else if(board[i][j]=='B'){
                break;
            }
            i--;
        }
        int bottom = 0;
        i = x,j = y;
        while(i<board.size()){
            if(board[i][j]=='p'){
                bottom=1;
                break;
            }
            else if(board[i][j]=='B'){
                break;
            }
            i++;
        }
        int left = 0;
        i = x,j = y;
        while(j>=0){
            if(board[i][j]=='p'){
                left=1;
                break;
            }
            else if(board[i][j]=='B'){
                break;
            }
            j--;
        }
        i = x,j = y;
        int right = 0;
        while(j<board[0].size()){
            if(board[i][j]=='p'){
                right=1;
                break;
            }
            else if(board[i][j]=='B'){
                break;
            }
            j++;
        }
        return top+bottom+left+right;
        
    }
};