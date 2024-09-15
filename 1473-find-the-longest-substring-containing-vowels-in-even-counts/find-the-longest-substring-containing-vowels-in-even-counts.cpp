class Solution {
public:
    int findTheLongestSubstring(string s) {
        int maxLen = 0;
        for(int i = 0;i < s.size();i++){
            int a = 0,e = 0,ie = 0,o = 0,u = 0;
            if(maxLen>=(s.size()-i)) break;
            for(int j = i;j<s.size();j++){
                if(s[j]=='a') a++;
                else if(s[j]=='e') e++;
                 else if(s[j]=='i') ie++;
                  else if(s[j]=='o') o++;
                   else if(s[j]=='u') u++;
                   if(a%2==0 && e%2==0 && ie%2==0 && o%2==0 && u%2==0) {
                    maxLen = max(maxLen,j-i+1);
                   }
            }
        }
        return maxLen;
    }
};