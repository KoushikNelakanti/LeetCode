class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s = strs[0];
        int ind = 0;
        for(int i = 1;i < strs.size();i++){
            ind = 0;
            if(strs[i].size()<s.size()){
                s[strs[i].size()]='\0';
            }
            for(int j = 0;j < strs[i].size();j++){
                if(ind==s.size()) break;
                if(s[ind]!=strs[i][j]){
                    s[ind]='\0';
                }
                ind++;
            }
        }
        string res = "";
        ind = 0;
        while(s[ind]!='\0'){
            res+=s[ind++];
        }
        return res;
    }
};