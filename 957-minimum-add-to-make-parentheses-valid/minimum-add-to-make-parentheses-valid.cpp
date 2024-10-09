class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        int count = 0;
        for(int i = 0;i < s.size();i++){
            if(s[i]==')'){
                if(st.size()){
                    st.pop();
                }
                else{
                    count++;
                }
            }
            else st.push(s[i]);
        }
        count+=st.size();
        return count;
    }
};