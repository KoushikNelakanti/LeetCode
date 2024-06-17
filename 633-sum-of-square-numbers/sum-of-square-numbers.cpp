class Solution {
public:
    bool judgeSquareSum(int c) {
        if(c==0) return true;
        double a,b;
        for(int i = 0;i < sqrt(c);i++){
            a = c-i*i;
            b = floor(sqrt(a));
            if(a==b*b) return true;
        }
        return false;
    }
};