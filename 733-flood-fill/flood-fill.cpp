class Solution {
public:
    int isValid(int i,int j,vector<vector<int>> & image){
        return !(i<0 || j<0 || i>=image.size() || j>=image[i].size());
    }
    void dfs(int i,int j,vector<vector<int>> & image,vector<vector<int>>& vis,int start,int color){
        if(vis[i][j]==1) return;
        vis[i][j]=1;
        if(image[i][j]==start) image[i][j]=color;
        else return;
        if(isValid(i+1,j,image)) dfs(i+1,j,image,vis,start,color);
        if(isValid(i,j+1,image)) dfs(i,j+1,image,vis,start,color);
        if(isValid(i-1,j,image)) dfs(i-1,j,image,vis,start,color);
        if(isValid(i,j-1,image)) dfs(i,j-1,image,vis,start,color);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int starting = image[sr][sc];
        vector<vector<int>> vis;
        for(int i = 0;i < image.size();i++){
            vector<int> v;
            for(int j = 0;j < image[i].size();j++){
                v.push_back(0);
            }
        vis.push_back(v);
        }

        dfs(sr,sc,image,vis,starting,color);
        return image;
    }
};