class Solution {
public:
    int getMinNum(int n,vector<int>& v,unordered_map<int,int>& mp){
    if(n==0) return 0;
    if(mp[n]) return mp[n];
    mp[n]=1e9;
    for(int i = 0;i < v.size();i++){
        if(v[i]<=n) mp[n] = min(mp[n],1+getMinNum(n-v[i],v,mp));
    }
    return mp[n];
}
    int numSquares(int n) {
        vector<int> v;
        unordered_map<int,int> mp;
        for(int i = 1;i*i<=n;i++){
            v.push_back(i*i);
        }
        return getMinNum(n,v,mp);
    }
};