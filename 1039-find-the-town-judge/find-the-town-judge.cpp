class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(trust.size()==0 && n==1) return 1;
        else if(trust.size()==0) return -1;
        unordered_map<int,int> mp;
        for(int i = 0;i < trust.size();i++){
            mp[trust[i][1]]++;
        }
        unordered_map <int,int>::iterator it;
        it = mp.begin();
        while(it!=mp.end()){
            if(it->second==n-1) {
                int c=0;
                for(int i = 0;i < trust.size();i++){
                    if(it->first==trust[i][0]) c++;
                }
                if(c==0) return it->first;
            }
            ++it;
        }
        return -1;
    }
};