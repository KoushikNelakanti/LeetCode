class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int> res(n);
        for(int i = 0;i < n;i++){
            res[i]=start+2*i;
        }
        for(int i = 1;i < n;i++){
            res[i]=res[i]^res[i-1];
        }
        return res[n-1];
    }
};