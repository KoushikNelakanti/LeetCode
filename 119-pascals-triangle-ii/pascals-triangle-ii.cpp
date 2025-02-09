class Solution {
public:
    vector<vector<int>> triangle;
    bool isNotValid(int x,int y){
        return x<0 || x>=triangle.size() || y<0 || y>=triangle[x].size();
    }
    vector<int> getRow(int rowIndex) {
        for(int i = 0;i <=rowIndex;i++){
            vector<int> v;
            if(i==0){
                v.push_back(1);
                triangle.push_back(v);
                continue;
            }
            for(int j = 0;j <=i;j++){
                int value = 0,x = i-1,y = j-1;
                if(!isNotValid(x,y)){
                    value+=triangle[x][y];
                }
                y = j;
                if(!isNotValid(x,y)){
                    value+=triangle[x][y];
                }
                v.push_back(value);
            }
            triangle.push_back(v);
        }
        return triangle[rowIndex];
    }
};