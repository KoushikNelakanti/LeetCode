class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        unordered_map <char,int> mp1;
        for(int i = 0;i<words[0].size();i++){
            mp1[words[0][i]]++;
        }
        for(int i = 1;i < words.size();i++){
            unordered_map <char,int> mp2;
            for(int j = 0;j < words[i].size();j++){
                mp2[words[i][j]]++;
            }
            for(int i = 0;i < 26;i++){
                if(mp1[97+i]!=mp2[97+i]){
                    mp1[97+i]=min(mp1[97+i],mp2[97+i]);
                }
            }
        }
        vector<string> res;
        for(int i = 0;i < 26;i++){
            while(mp1[97+i]){
                string s = "";
                s+=97+i;
                res.push_back(s);
                mp1[97+i]--;
            }
        }
        return res;
    }
};