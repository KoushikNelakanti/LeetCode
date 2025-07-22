class Solution {
public:
    bool isValid(int x,int y,vector<vector<char>>& grid){
        return !(x<0 || y<0 || x>=grid.size() || y>=grid[0].size() || grid[x][y]=='0' || grid[x][y]=='2');
    }
    void dfs(int i,int j,vector<vector<char>>& grid){
       stack<pair<int,int>> st;
       pair<int,int> p;
       p.first = i;
       p.second = j;
       st.push(p);
       while(st.size()){
            pair<int,int> top = st.top();
            st.pop();
            int x = top.first,y = top.second;
            grid[x][y] = '2';
            if(isValid(x+1,y,grid)){
                st.push({x+1,y});
            }
            if(isValid(x-1,y,grid)){
                st.push({x-1,y});
            }
            if(isValid(x,y+1,grid)){
                st.push({x,y+1});
                
            }
            if(isValid(x,y-1,grid)){
                st.push({x,y-1});
            }
       }
    }
    int numIslands(vector<vector<char>>& grid) {
        int islands = 0;
        for(int i = 0;i < grid.size();i++){
            for(int j = 0;j < grid[i].size();j++){
                if(grid[i][j]=='1'){
                    dfs(i,j,grid);
                    islands++;
                }
            }
        }
        return islands;
    }
};