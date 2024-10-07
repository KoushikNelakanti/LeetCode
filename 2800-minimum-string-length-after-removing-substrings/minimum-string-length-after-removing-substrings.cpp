class Solution {
public:
    int find(string s){
        for(int i = 1;i < s.size();i++){
            if(s[i]=='B' && s[i-1]=='A') return i-1;
            else if(s[i]=='D' && s[i-1]=='C') return i-1;
        }
        return -1;
    }
    string remove(int i,string s){
        string res = "";
        int ind = 0;
        while(ind<i){
            res+=s[ind];
            ind++;
        }
        ind = i+2;
        while(ind<s.size()){
            res+=s[ind];
            ind++;
        }
        return res;
    }
    int minLength(string s) {
        int index = 0;
        while(1){
            index = find(s);
            if(index==-1) break;
            s=remove(index,s); 
        }
        return s.size();
    }
};