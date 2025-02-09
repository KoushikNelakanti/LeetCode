class Solution {
public:
    int findIndex(char ch,int index,string t){
        for(int i = index;i<=t.size();i++){
            if(ch==t[i]) return i;
        }
        return -1;
    }
    bool isSubsequence(string s, string t) {
        int index = -1,ind=0;
        while(ind!=s.size()){
            index = findIndex(s[ind++],index+1,t);
            if(index==-1) return false; 
        }
        return true;
    }
};