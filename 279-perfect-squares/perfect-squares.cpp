class Solution {
public:
vector<int> v;
unordered_map<int,int> mp;
    int getMinNum(int n){
    if(n==0) return 0;
    if(mp[n]) return mp[n];
    mp[n]=1e9;
    for(int i = v.size()-1;i>=0;i--){
        if(v[i]<=n) mp[n] = min(mp[n],1+getMinNum(n-v[i]));
    }
    return mp[n];
}
    int numSquares(int n) {
        for(int i = 1;i*i<=n;i++){
            v.push_back(i*i);
        }
        return getMinNum(n);
    }
};