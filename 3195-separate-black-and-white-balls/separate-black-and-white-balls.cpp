class Solution {
public:
    long long minimumSteps(string s) {
        long long count = 0;
        int last = s.size()-1;
        for(int i = s.size()-1;i>=0;i--){
            if(s[i]=='1'){
               count+=(last-i);
               last--; 
            }
        }
        return count;
    }
};