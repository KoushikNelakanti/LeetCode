class Solution {
public:
    int minimumLength(string s) {
        int i = 0,j = s.size()-1,a = 0,b = s.size()-1;
        if(s[0]!=s[s.size()-1]) return s.size();
        while(s[i]==s[j] && i<j){
            a=i;
            while(s[i]==s[j] && i<s.size()){
                i++;
            }
            if(i>j) break;
            while(s[a]==s[j]&& j>=0){
                j--;
            }
           if(i>j) break;
        }
        cout<<i<<" "<<j<<endl;
      if(i>j) return 0;
      else return abs(i-j)+1;
    }
};