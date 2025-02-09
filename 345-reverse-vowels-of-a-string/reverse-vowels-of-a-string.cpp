class Solution {
public:
    bool isVowel(char ch){
        return ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u';
    }
    string reverseVowels(string s) {
        vector<char> res;
        for(int i = 0;i < s.size();i++){
            if(isVowel(tolower(s[i]))){
                res.push_back(s[i]);
            }
        }
        cout<<res.size()<<endl;
        int ind = res.size()-1;
        for(int i = 0;i < s.size();i++){
            if(isVowel(tolower(s[i]))){
                s[i]=res[ind--];
            }
        }
        return s;
    }
};