class Solution {
public:
    int maxScore(string s) {
        int one = 0,zero = 0;
        for(int i = 0;i < s.size();i++){
            if(s[i]=='1') one++;
        }
        // if(one==0 || zero==0) return s.size()-1;
        int mx = 0;
        for(int i = 0;i < s.size()-1;i++){
            cout<<i<<" "<<one<<" "<<zero<<endl;
            if(s[i]=='0') ++zero;
            else --one;
            mx = max(mx,one+zero);
        }
        
            mx = max(mx,one+zero);
        return mx;
    }
};