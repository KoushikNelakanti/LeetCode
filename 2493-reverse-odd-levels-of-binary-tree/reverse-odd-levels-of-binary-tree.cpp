/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int flag = 0,index = 0;
    void levelOrder(TreeNode * root, vector<int>& order){
        queue<TreeNode*> q;
        TreeNode * temp = root;
        TreeNode * t = new TreeNode(-1);
        q.push(root);
        while(q.size()){
            q.push(NULL);
            while(q.front() && q.front()->val!=-1){
                if(flag==0) order.push_back(q.front()->val);
                else q.front()->val=order[index++];
                if(q.front()->left){
                    q.push(q.front()->left);
                }
                else q.push(t);
                if(q.front()->right){
                    q.push(q.front()->right);
                }
                else q.push(t);
                q.pop();
            }
            while(q.size() && (q.front()==NULL || q.front()->val==-1)){
                q.pop();
            }
            if(flag==0) order.push_back(-1);
            else index++;

        }
    }
    TreeNode* reverseOddLevels(TreeNode* root) {
        vector<int> order;
        levelOrder(root,order);
        int prev = -1,next = -1,count = 0;
        for(int i = 0;i < order.size();i++){
            if(order[i]==-1){
               next = i;
               if(count%2){
                reverse(order.begin()+prev+1,order.begin()+next);
               }
               prev = i;
                count++;
            }
        }
        flag = 1;
        levelOrder(root,order);
        return root;
    }
};