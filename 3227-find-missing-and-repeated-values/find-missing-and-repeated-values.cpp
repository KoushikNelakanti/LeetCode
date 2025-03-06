class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_map<int,int> mp;
        for(int i = 0;i < grid.size();i++){
            for(int j = 0;j < grid.size();j++){
                mp[grid[i][j]]++;
            }
        }
        int missing=grid[0][0],repeated = grid[0][0];
        for(int i = 1;i <=grid.size()*grid.size();i++){
            if(mp[i]==2) repeated = i;
            else if(mp[i]==0) missing = i;
        }
        vector<int> res;
        res.push_back(repeated);
        res.push_back(missing);
        return res;
    }
};