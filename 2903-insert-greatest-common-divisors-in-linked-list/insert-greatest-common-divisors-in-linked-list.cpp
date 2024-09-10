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
    int getGcd(int a,int b){
        if(a==0) return b;
        if(b==0 || a==b) return a;
        if(a>b) return getGcd(a-b,b);
        return getGcd(a,b-a);
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head->next==NULL) return head;
        ListNode * prev = head,* nxt = head->next;
        while(nxt!=NULL){
            int gcd = getGcd(prev->val,nxt->val);
            ListNode * nn = new ListNode(gcd);
            prev->next = nn;
            nn->next = nxt;
            prev=nxt;
            nxt=nxt->next;
        }
        return head;
    }
};