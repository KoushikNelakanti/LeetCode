class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<int> st;
        string res = "";
        for(int i = 0;i < s.size();i++){
           if(s[i]=='(') st.push(i);
           else if(s[i]==')'){
            if(st.size()==1){
                s[i]=' ';
                s[st.top()]=' ';
                st.pop();
            }
            else st.pop();
           }
        }
        for(int i = 0;i < s.size();i++){
            if(s[i]!=' ') res+=s[i];
        }
        return res;
    }
};