class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int a = 0,b = 0;
        for(int i = 0;i < edges.size();i++){
          if(edges[0][0]==edges[i][0] || edges[0][0]==edges[i][1]) a++;
          else if(edges[0][1]==edges[i][0] || edges[0][1]==edges[i][1]) b++;
        }
        if(a>b) return edges[0][0];
        else return edges[0][1];
    }
};