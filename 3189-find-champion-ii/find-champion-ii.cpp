class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) {
        vector<int> visit(n,0);
        for(int i = 0;i < edges.size();i++){
            visit[edges[i][1]]++;
        }
        int minInd = 0;
        for(int i = 0;i < n;i++){
            if(visit[minInd]>visit[i]){
                minInd = i;
            }
        }
        for(int i = 0;i < n;i++){
            if(i!=minInd && visit[minInd]==visit[i]){
                return -1;
            }
        }
        return minInd;

    }
};