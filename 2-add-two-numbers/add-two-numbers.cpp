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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        string a = "";
        string b = "";
        ListNode * temp = l1;
        while(temp!=NULL){
            a+=48+temp->val;
            temp=temp->next;
        }
        temp = l2;
        while(temp!=NULL){
            b+=48+temp->val;
            temp=temp->next;
        }
        string res = "";
        int i = 0,j = 0,c=0;
        while(i!=a.size() && j!=b.size())
        {
            int x = a[i]-48;
            int y = b[j]-48;
            if(x+y+c<=9){
                res+=48+x+y+c;
                c=0;
            }
            else{
                res+=48+(x+y+c)%10;
                c = (x+y+c)/10;
            }
            i++;
            j++;
        }
          while(j!=b.size())
        {
            int y = b[j]-48;
            if(y+c<=9){
                res+=48+y+c;
                c=0;
            }
            else{
                res+=48+(y+c)%10;
                c =(y+c)/10;
            }
            j++;
        }
        while(i!=a.size())
        {
            int x = a[i]-48;
            if(x+c<=9){
                res+=48+x+c;
                c=0;
            }
            else{
                res+=48+(x+c)%10;
                c =(x+c)/10;
            }
            i++;
        }
        if(c){
            res+=48+c;
        }
      ListNode * nn = new ListNode();
      temp=nn;
      nn->val=res[0]-48;
      for(int i = 1;i < res.size();i++){
          ListNode * t = new ListNode();
          t->val=res[i]-48;
          temp->next=t;
          temp = t;
      }
      return nn;
    }
};