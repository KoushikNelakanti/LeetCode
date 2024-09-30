class Solution {
public:
    int isPalin(string s){
        for(int i =0;i <=s.size()/2;i++){
            if(s[i]!=s[s.size()-1-i]) return 0;
        }
        return 1;
    }
    string longestPalindrome(string s) {
        int maxLen = 0;
        string res = "",temp = "";
        for(int i = 0;i < s.size();i++){
            temp = "";
            if(maxLen>s.size()-i) break;
            for(int j = i;j < s.size();j++){
                temp+=s[j];
                if(temp.size()>maxLen && temp[0]==temp[temp.size()-1] && isPalin(temp)){
                    if(temp.size()>maxLen){
                        maxLen = temp.size();
                        res = temp;
                    }
                }
            }
        }
        return res;
    }
};