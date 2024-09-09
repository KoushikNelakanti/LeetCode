class Solution {
public:
    int getValue(char ch){
        if(ch=='M') return 1000;
        else if(ch=='D') return 500;
        else if(ch=='C') return 100;
        else if(ch=='L') return 50;
        else if(ch=='X') return 10;
        else if(ch=='V') return 5;
        else if(ch=='I') return 1;
        return 0;
    }
    int romanToInt(string s) {
        int total = 0,a,b;
        for(int i = 0;i<s.size();i++){
            a = getValue(s[i]);
            if(i+1<s.size()){
                b = getValue(s[i+1]);
                if(a<b){
                total+=b-a;
                i++;
            }
            else{
                total+=a;
            }
            }
            else total+=a;
           
        }
        return total;
    }
};