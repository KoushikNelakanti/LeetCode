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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        vector<long long> res;
        queue<TreeNode*> q;
        q.push(root);
        TreeNode * temp = root;
        long long sum = 0;
        while(q.size()){
            if(q.front()){
                q.push(NULL);
                while(q.front()!=NULL){
                    if(q.front()->left) q.push(q.front()->left);
                    if(q.front()->right) q.push(q.front()->right);
                    sum+=q.front()->val;
                    q.pop();
                }
            }
            if(q.front()==NULL){
                q.pop();
                res.push_back(sum);
                sum = 0;
            }
        }
        cout<<res.size();
        if(sum!=0){
            res.push_back(sum);
        }
        sort(res.begin(),res.end());
        int index = res.size()-k;
        if(index>=0){
            return res[index];
        }
        else return -1;
    }
};