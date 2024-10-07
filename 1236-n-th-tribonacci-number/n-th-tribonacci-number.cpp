class Solution {
public:
    int tribonacci(int n) {
        if(n<=1) return n;
        if(n==2) return 1;
        vector<int> res(n+1,0);
        res[0]=0;
        res[1]=1;
        res[2]=1;
        for(int i = 3;i <=n;i++){
            res[i]=0;
            res[i]+=res[i-1];
            res[i]+=res[i-2];
            res[i]+=res[i-3];   
                 }
        return res[n];
    }
};