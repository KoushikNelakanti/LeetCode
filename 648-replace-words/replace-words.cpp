class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        unordered_map <string,int> mp;
        for(int i = 0;i < dictionary.size();i++){
            mp[dictionary[i]]++;
        }
        string res="";
        string s="";
        for(int i = 0;i < sentence.size();i++){
            s+=sentence[i];
            res+=sentence[i];
            while(mp.count(s) && sentence[i]!=' ' && i<sentence.size()) i++;
            if(i>=sentence.size()) break;
            if(mp.count(s)) res+=' ';
            if(sentence[i]==' ') s = "";
        }
        return res;
    }
};