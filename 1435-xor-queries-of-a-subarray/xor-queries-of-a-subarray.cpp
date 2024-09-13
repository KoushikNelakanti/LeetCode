class Solution {
public:
    
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        unordered_map <int,int> mp;
        int value = 0;
        vector<int> res;
        for(int i = 0;i < arr.size();i++){
            value = value^arr[i];
            mp[i]=value;
        }
        for(int i = 0;i < queries.size();i++){
            if(queries[i][0]!=0){
                res.push_back(mp[queries[i][0]-1]^mp[queries[i][1]]);
            }
            else{
                res.push_back(mp[queries[i][1]]);
            }
        }
        return res;
    }
};