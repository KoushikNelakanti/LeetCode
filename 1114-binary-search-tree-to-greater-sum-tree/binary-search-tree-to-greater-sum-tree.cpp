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
    void inorder(TreeNode *root,vector<int>& order){
        if(root==NULL) return;
        inorder(root->left,order);
        order.push_back(root->val);
        inorder(root->right,order);
    }
    void setData(TreeNode *root,vector<int> order,int& ind){
        if(root==NULL) return;
        setData(root->left,order,ind);
        root->val=order[ind];
        ind++;
        setData(root->right,order,ind);
    }
    TreeNode* bstToGst(TreeNode* root) {
        vector<int> order;
        int ind = 0;
        inorder(root,order);
        int sum = 0,prev = 0;
        for(int i = 0;i < order.size();i++){
            sum+=order[i];
        }
        for(int i = 0;i < order.size();i++){
            prev = order[i];
            order[i]=sum;
            sum-=prev;
        }
        setData(root,order,ind);
        return root;
    }
};