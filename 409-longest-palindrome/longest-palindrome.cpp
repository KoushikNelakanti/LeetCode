class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map <char,int> mp;
        for(int i = 0;i < s.size();i++){
            mp[s[i]]++;
        }
        unordered_map <char,int>::iterator it = mp.begin();
        int unique = 0,length = 0;
        while(it!=mp.end()){
            if((it->second)%2){
                unique = 1;
                length+=(it->second)-1;
            }
            else{
                length+=it->second;
            }
            ++it;
        }
        return length+unique;
    }
};