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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
            ListNode * temp = head;
            int c = 0;
            while(temp->next!=NULL){
                temp = temp->next;
                c++;
            }
            cout<<c;
            if(c-n==-1){
                return head->next;
            }
            temp = head;
            while((c-n)!=0 && temp->next!=NULL){
                temp=temp->next;
            c--;
            }
            if(temp->next==NULL){
                return NULL;
            }
            else temp->next = temp->next->next;

            return head;
    }
};