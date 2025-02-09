class Solution {
public:
    string reverseWords(string s) {
        vector<string> v;
        string res = "";
        for(int i = 0;i < s.size();i++){
            if(s[i]!=' '){
                res+=s[i];
            }
            else{
                if(res.size()){
                    v.push_back(res);
                    res="";
                }
            }
        }
        if(res.size()){
                    v.push_back(res);
                    res="";
                }
                res = "";
        for(int i = v.size()-1;i>=0;i--){
        if(i!=0) res+=v[i]+" ";
        else res+=v[i];
        }
        return res;
    }
};