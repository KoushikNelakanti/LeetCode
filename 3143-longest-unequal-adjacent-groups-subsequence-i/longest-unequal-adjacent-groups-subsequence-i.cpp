class Solution {
public:
    void nextOne(int index,vector<int> groups,vector<string> words,vector<string>& res){
        int i=index;
        for( i = index;i<groups.size();i++){
            if(groups[i]){
                break;
            }
        }
        if(i<groups.size()) {
            res.push_back(words[i]);
            nextZero(i,groups,words,res); 
        }
    }
    void nextZero(int index,vector<int> groups,vector<string> words,vector<string>& res){
         int i=index;
        for( i = index;i<groups.size();i++){
            if(groups[i]==0){
                break;
            }
        }
        if(i<groups.size()) {
            res.push_back(words[i]);
            nextOne(i,groups,words,res);
        }
    }
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        vector<string> res1,res2;
        nextOne(0,groups,words,res1);
        nextZero(0,groups,words,res2);
        if(res1.size()>res2.size()) return res1;
        else return res2;
    }
};