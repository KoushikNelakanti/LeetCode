class Solution {
public:
    bool isVowel(char ch){
     return ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u';
    }
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int> freq;
        int count = 0;
        for(int i = 0;i < words.size();i++){
            if(isVowel(words[i][0]) && isVowel(words[i][words[i].size()-1])){
                count++;
            }
            freq.push_back(count);
        }
        vector<int> res;
        for(int i = 0;i < queries.size();i++){
            int a = queries[i][0],b = queries[i][1];
            int value = (a-1)>=0?freq[a-1]:0;
            res.push_back(freq[b]-value);
        }
        return res;
    }
};