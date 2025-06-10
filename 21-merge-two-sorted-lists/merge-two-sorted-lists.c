/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    if(list1==list2 && list1==NULL) return list1;
    else if(list1==NULL) return list2;
    else if(list2==NULL) return list1;
    struct ListNode * head = (struct ListNode *)malloc(sizeof(struct ListNode)) ,*t1 = list1,*t2 = list2;
    struct ListNode *t = head;
    head->val = 10;
    while(t1 && t2){
        struct ListNode * nn =  (struct ListNode *)malloc(sizeof(struct ListNode));
        nn->next = NULL;
        if(t1->val < t2->val){
            nn->val = t1->val;
            t->next = nn;
            t1 = t1->next;
        }
        else{
            nn->val = t2->val;
            t->next = nn;
            t2 = t2->next;
        }
        t = t->next;
    }
    while(t1){
        struct ListNode * nn =  (struct ListNode *)malloc(sizeof(struct ListNode));
        nn->next = NULL;
        nn->val = t1->val;
        t->next = nn; 
        t1 = t1->next;
        t = t->next;
    }
    while(t2){
        struct ListNode * nn =  (struct ListNode *)malloc(sizeof(struct ListNode));
        nn->next = NULL;
        nn->val = t2->val;
        t->next = nn; 
        t2 = t2->next;
        t = t->next;
    }
    head = head->next;
    return head;
}