class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        unordered_map<int,int> mp;
        unordered_map<long long, int> v;
        vector<int> result;
        for(int i = 0;i < queries.size();i++){
            int first = queries[i][0],second = queries[i][1];
            if(mp[second]){
               if(mp[v[first]]) {
                    --mp[v[first]];
                if(mp[v[first]]==0) mp.erase(v[first]);
                }
                v[first] = second;
                mp[second]++;
            }
            else{
                if(mp[v[first]]) {
                    --mp[v[first]];
                if(mp[v[first]]==0) mp.erase(v[first]);
                }
                v[first] = second;
                mp[second]++;
            }
                // cout<<i<<" ";
                // unordered_map<int,int>::iterator it = mp.begin();
                // while(it!=mp.end()){
                //     cout<<it->first<<" ";
                //     ++it;
                // }
                // cout<<endl;
            result.push_back(mp.size()-1);
        }
        return result;
    }
};