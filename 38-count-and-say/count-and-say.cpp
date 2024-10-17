class Solution {
public:
    string makePerfect(string s){
        string res = "";
        for(int i = 0;i < s.size();i++){
            char ch = s[i];
            int ind = i;
            int count = 0;
          while(ind<s.size() && ch==s[ind]){
            ind++;
            count++;
          }
          if(count){
            res+=48+count;
            res+=s[i];
            i = ind-1;
          }
        }
        return res;
    }
    string countAndSay(int n) {
        string s ="1";
        n--;
        while(n--){
            s = makePerfect(s);
        }
        return s;
    }
};