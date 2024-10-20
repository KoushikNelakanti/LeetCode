class Solution {
public:
    bool parseBoolExpr(string expression) {
        stack<char> st;
        stack<char>operate;
        int value = 0;
        for(int i = 0;i < expression.size();i++){
            if(expression[i]=='!' || expression[i]=='&' || expression[i]=='|') operate.push(expression[i]);
           else if(st.size() && expression[i]==')'){
                int value = 0;
                if(st.top()=='t') value = 1;
                st.pop();
                if(st.size() &&  st.top()=='('){
                        if(operate.size() && operate.top()=='!') value = !value;
                }
                else{
                    while(st.size() && st.top()!='('){
                    if(operate.top()=='!') value = !value;
                    else{
                        int n = 0;
                        if(st.top()=='t') n = 1;
                        if(operate.top()=='&') value = value&n;
                        else if(operate.top()=='|') value = value|n;
                    }
                    st.pop();
                }
                }
                if(operate.size()) operate.pop();
                st.pop();
                if(value) st.push('t');
                else st.push('f');

            }
            else if(expression[i]!=',') st.push(expression[i]);
        }
        if(st.top()=='f') return false;
        else return true;
    }
};