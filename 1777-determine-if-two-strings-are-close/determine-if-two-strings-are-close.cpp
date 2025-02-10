class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size()!=word2.size()) return false;
        vector<int> freq1(26,0),freq2(26,0);
        for(int i = 0;i < word1.size();i++){
            freq1[word1[i]%97]++;
            freq2[word2[i]%97]++;
        }
        for(int i = 0;i < 26;i++){
            if(freq1[i]){
                if(!freq2[i]) return false;
            }
            else if(freq2[i]){
                return false;
            }
        }
        sort(freq1.begin(),freq1.end());
        sort(freq2.begin(),freq2.end());
        for(int i = 0;i < 26;i++){
            if(freq1[i]!=freq2[i]) return false;
        }
        return true;
    }  
};