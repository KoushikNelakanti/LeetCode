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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode * temp = list1;
        ListNode * last = list2;
        while(last->next!=NULL){
            last = last->next;
        }
        int l = a;
        ListNode * par=list1,*child;
        while(l--){
            par = temp;
            temp=temp->next;
        }
        while(b-a && temp!=NULL){
            temp=temp->next;
            child = temp;
            b--;
        }
       if(temp!=NULL) temp = temp->next;
        last->next = temp;
        par->next = list2;
        return list1;
    }
};