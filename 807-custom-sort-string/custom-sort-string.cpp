class Solution {
public:
    string customSortString(string order, string s) {

       unordered_map <char,int> mp;
       unordered_map <char,int> mp1;
       for(int i = 0;i < order.size();i++){
           mp[order[i]]++;
       }
       for(int i = 0;i < s.size();i++){
        if(mp[s[i]]){
            mp1[s[i]]++;
        }
       }
       vector<int> v(order.size());
       for(int i = 0;i < order.size();i++){
           if(mp1[order[i]]) v[i]=mp1[order[i]];
           else v[i]=INT_MAX;
       }
       string res = "";
       int m = v.size();
       for(int i = 0;i < v.size();i++){
           if(v[i]>200) continue;
          for(int j = 0;j < v[i];j++){
              res+=order[i];
          }
       }
       for(int i = 0;i < s.size();i++){
           if(mp[s[i]]==0) res+=s[i];
       }
       return res;
    }
};