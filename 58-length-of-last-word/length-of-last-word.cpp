class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.size()-1;
        while(i>=0 && s[i]==' '){
            i--;
        }
        int j = i;
        while(j>=0 && s[j]!=' '){
            j--;
        }
        if(i==j) return 1;
        else return i-j;
    }
};