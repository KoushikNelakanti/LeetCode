class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> st;
        st.push(-1);
        int count = 0,maxCount = 0,present;
        for(int i = 0;i < s.size();i++){
            if(s[i]=='(') {
                st.push(i);
            }
            else{
                if(st.size()){
                    st.pop();
                }
                if(st.size()){
                    count = i-st.top();
                    maxCount = max(maxCount,count);
                }
                else{
                    st.push(i);
                }
                
            }
        }
        return maxCount;
    }
};