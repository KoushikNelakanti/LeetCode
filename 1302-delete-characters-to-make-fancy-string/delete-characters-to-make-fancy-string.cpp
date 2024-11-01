class Solution {
public:

    string makeFancyString(string s) {
        string res = "";
        char ch = ' ';
        int count = 0;
        for(int i = 0;i < s.size();i++){
            if(s[i]!=ch){
                ch = s[i];
                count = 1;
                res+=s[i];
            }
            else{
                count++;
                if(count<3) res+=s[i];
            }
        }
        return res;
    }
};