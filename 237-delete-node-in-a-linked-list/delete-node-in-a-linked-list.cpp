/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode * prev = NULL;
        while(node->next!=NULL){
            prev = node;
            cout<<node->val<<" "<<node->next->val<<endl;
            node->val = node->next->val;
            node = node->next;
        }
        if(prev) prev->next = NULL;
    }
};