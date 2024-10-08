class Solution {
public:
    int minSwaps(string s) {
        stack<char> st;
        for(int i = 0;i < s.size();i++){
            if(s[i]==']'){
                if(st.size() && st.top()=='[') st.pop();
                else st.push(s[i]);
            }
            else st.push(s[i]);
        }
        int count = ceil(st.size()/2.0);
        count = ceil(count/2.0);
        return count;
    }
};