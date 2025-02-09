class Solution {
public:
    int maxRepeating(string sequence, string word) {
        size_t start = sequence.find(word);
        string t = word;
        int size = word.size();
        if(start==string::npos) return 0;
        while(start!=string::npos){
         start = sequence.find(word+t);
            if(start!=string::npos) word=word+t;
        }
        return word.size()/t.size();
    }
};