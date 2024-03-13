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
    ListNode* doubleIt(ListNode* head) {
        vector<int> v;
        ListNode * temp = head;
        int c = 0;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp=temp->next;
        }
        for(int i = v.size()-1;i>=0;i--){
            if((v[i]+v[i]+c)>=10){
                int temp = v[i];
                v[i]= (v[i]+v[i]+c)%10;
                c = (temp+temp+c)/10;
            }
            else{
                v[i]*=2;
                v[i]+=c;
                c=0;
            }
        }
        ListNode * nn = new ListNode();
                temp = nn;
                cout<<c<<endl;
        if(c){
            nn->val=c;
            for(int i = 0;i < v.size();i++){
                ListNode * t1 = new ListNode(v[i]);
                temp->next = t1;
                temp = t1;
            }
        }
        else{
            if(v.size()){
                nn->val = v[0];
                for(int i = 1;i < v.size();i++){
                ListNode * t1 = new ListNode(v[i]);
                temp->next = t1;
                temp = t1;
                }
            }
        }

        return nn;
    }
};