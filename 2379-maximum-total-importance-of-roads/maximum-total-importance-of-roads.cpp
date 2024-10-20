class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        vector<int> v(n,0);
        for(int i = 0;i < roads.size();i++){
           v[roads[i][0]]++;
           v[roads[i][1]]++;
        }
        vector<pair<int,int>> vec;
        for(int i = 0;i < v.size();i++){
            pair<int,int> p;
            p.first = v[i];
            p.second = i;
            vec.push_back(p);
        }
        sort(vec.begin(),vec.end());
        for(int i = vec.size()-1;i >=0 ;i--){
            v[vec[i].second]=n;
            n--;
        }
        int temp = n;
      
        long long sum = 0;
        for(int i = 0;i < roads.size();i++){
            sum+=v[roads[i][0]];
            sum+=v[roads[i][1]];
        }
        
        return sum;
    }
};