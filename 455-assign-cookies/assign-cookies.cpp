class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
      int i = 0,j = 0;
      sort(g.begin(),g.end());
      sort(s.begin(),s.end());
      while(j!=s.size()){
        if(j<s.size() && g[i]>s[j]) j++;
        else {
            i++;
            j++;
        }
        if(i>=g.size()) break;
      } 
      return i; 
    }
};