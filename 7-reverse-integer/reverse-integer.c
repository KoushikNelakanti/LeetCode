int reverse(long long int x){
    int m = 0;
    if(x<0){
        m = 1;
        x=-x;
    }
    long long int n = 0;
    while(x){
        if(n*10>2147483647 || n*10<-2147483648) return 0;
        n=n*10+x%10;
        x/=10;
    }
    if(m) return -n;
    else return n;
}