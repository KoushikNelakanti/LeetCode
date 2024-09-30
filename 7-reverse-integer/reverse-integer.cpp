class Solution {
public:
    int reverse(int x) {
        if(x==0) return 0;
        long long int num = 0,m = 1;
        while(x){
            if(num*10>2147483647 || num*10<-2147483648) return 0;
            num = num*10+x%10;
            x/=10;
        }
        return num;
    }
};