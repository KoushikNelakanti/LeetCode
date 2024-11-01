class Solution {
public:

    string makeFancyString(string s) {
        stack<char> st;
        int count = 0;
        for(int i = 0;i < s.size();i++){
            if(st.size() && st.top()==s[i]){
                count++;
                st.push(s[i]);
                if(count==3){
                    st.pop();
                    count--;
                }
            }
            else{
                st.push(s[i]);
                count = 1;
            }
        }
        string res = "";
        while(st.size()){
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};