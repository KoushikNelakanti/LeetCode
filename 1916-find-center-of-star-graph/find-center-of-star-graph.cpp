class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int a = 0,b = 0,c=edges[0][0],d=edges[0][1];
        for(int i = 0;i < edges.size();i++){
         if(edges[i][0]==c || edges[i][1]==c) a++;
         else if(edges[i][1]==d || edges[i][1]==d) b++;
        }
        if(a>b) return edges[0][0];
        else return edges[0][1];
    }
};