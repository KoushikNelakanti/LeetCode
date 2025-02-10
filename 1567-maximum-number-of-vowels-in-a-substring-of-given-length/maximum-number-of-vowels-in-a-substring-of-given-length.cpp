class Solution {
public:
    bool isVowel(char ch){
        return ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u';
    }
    int maxVowels(string s, int k) {
        int i = 0,j = 0,vowel = 0,mx = 0;
        while(j!=s.size()){
            vowel+=isVowel(s[j]);
            while((j-i+1)>k){
                vowel-=isVowel(s[i]);
                i++;
            }
            if((j-i+1)==k){
                mx = max(mx,vowel);
            }
            j++;
        }
        return mx;
    }
};