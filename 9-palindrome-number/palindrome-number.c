bool isPalindrome(int x) {
    if(x<0) return 0;
    long long int t = x;
    long long int n = 0;
    while(t){
        n = n*10+t%10;
        t/=10;
    }
    return n==x;
}