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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode * first = head,* second = head->next;
        while(second!=NULL && second->next!=NULL){
            int temp = first->val;
            first->val = second->val;
            second->val = temp;
            first = second->next;
            second=second->next->next;
        }
        if(second!=NULL){
            int temp = first->val;
            first->val = second->val;
            second->val = temp;
        }
        return head;
    }
};