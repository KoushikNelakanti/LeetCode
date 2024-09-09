/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void nextPosition(vector<vector<int>> mat, int &i,int &j,char &current){
        if(current=='R'){
            current='D';
            j--;
            while(i<mat.size() && mat[i][j]!=-1) i++;
        }
        else if(current=='L'){
             current='T';
             j++;
              while(i>=0 && mat[i][j]!=-1) i--;
        }
        else if(current=='T'){
             current='R';
             i++;
              while(j<mat[i].size() && mat[i][j]!=-1) j++;
        }
        else{
             current='L';
             i--;
              while(j>=0 && mat[i][j]!=-1) j--;
        }
    }
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> mat;
        for(int i = 0;i < m;i++){
            vector<int> v(n,-1);
            mat.push_back(v);
        }
        int i = 0,j = 0;
        char current = 'R';
        ListNode * temp = head;
        while(temp!=NULL){
            if(i<0 || j<0 || i>=m || j>=n) nextPosition(mat,i,j,current);
            cout<<i<<" "<<j<<endl;
               if(mat[i][j]!=-1) {
                    if(current=='L'){
                        j++;
                        current = 'T';
                    }
                    else if(current=='R'){
                        j--;
                        current = 'D';
                    }
                    else if(current=='T'){
                        i++;
                        current = 'R';
                    }
                    else{
                        i--;
                        current = 'L';
                    }
                }
                if(mat[i][j]==-1) {
                    mat[i][j]=temp->val;
                    temp = temp->next;
                }
            if(current=='L') {
                j--;
            }
            else if(current=='R'){
                j++;
            }
            else if(current=='T'){
                i--;
            }
            else{
                i++;
            }
        }
        return mat;
    }
};