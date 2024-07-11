class Solution {
public:
    string reverseParentheses(string s) {
        string res = "",temp="";
        stack <char> st;
        for(int i = 0;i < s.size();i++){
            if(s[i]>=97 && s[i]<=122) st.push(s[i]);
            if(s[i]=='(') st.push(s[i]);
            if(s[i]==')'){
                temp = "";
            while(s[i]==')' && st.top()!='('){
                temp+=st.top();
                st.pop();
            }
            st.pop();
            cout<<temp<<endl;
            for(int j = 0;j < temp.size();j++) st.push(temp[j]);
            }
        }
        while(st.size()){
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};