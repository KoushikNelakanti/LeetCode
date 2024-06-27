class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map <int,int> mp;
        for(int i = 0;i < edges.size();i++){
            mp[edges[i][0]]++;
            mp[edges[i][1]]++;
        }
        if(mp[edges[0][0]]==edges.size()) return edges[0][0];
        else return edges[0][1];
    }
};