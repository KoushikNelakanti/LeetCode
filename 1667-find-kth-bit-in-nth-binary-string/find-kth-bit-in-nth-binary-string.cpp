class Solution {
public:
    string findNext(string s){
        string res = s;
        res+="1";
        for(int i = s.size()-1;i>=0;i--){
            if(s[i]%48){
                res+='0';
            }
            else{
                res+='1';
            }
        }
        return res;
    }
    char findKthBit(int n, int k) {
        string s = "0";
        n--;
        while(n--){
            s = findNext(s);
        }
        return s[k-1];

    }
};