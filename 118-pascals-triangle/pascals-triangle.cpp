class Solution {
public:
    vector<vector<int>> triangle;
    bool isNotValid(int i,int j){
        return i<0 || i>=triangle.size() || j<0 || j>=triangle[i].size();
    }
    vector<vector<int>> generate(int numRows) {
        for(int i = 0;i < numRows;i++){
            vector<int> v;
            if(i==0){
                v.push_back(1);
                triangle.push_back(v);
                continue;
            }
            for(int j = 0;j<=i;j++){
                int value = 0;
                int count = 0;
                int x = i-1,y = j-1;
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
        return triangle;
    }
};