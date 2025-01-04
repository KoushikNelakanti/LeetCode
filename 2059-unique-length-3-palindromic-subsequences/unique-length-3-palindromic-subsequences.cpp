class Solution {
public:
    int countPalindromicSubsequence(string s) {
        vector<int> lastIndex(26,0);
        vector<int> freq(26,0);
        set<string> se;
        int count = 0;
        for(int i = 0;i < s.size();i++){
            if(freq[s[i]%97]>=1){
                for(int j = 0;j < 26;j++){
                    if(lastIndex[j]>lastIndex[s[i]%97] && lastIndex[j]){
                        string str = "";
                        str+=s[i];
                        str+=j+97;
                        str+=s[i];
                        se.insert(str);
                        // cout<<str<<endl;
                    }
                }
            }
            lastIndex[s[i]%97]=i;
            freq[s[i]%97]++;
        }
        for(int i = 0;i < 26;i++){
           if(freq[i]>=3) count++;
        }
        return count+se.size();
    }
};