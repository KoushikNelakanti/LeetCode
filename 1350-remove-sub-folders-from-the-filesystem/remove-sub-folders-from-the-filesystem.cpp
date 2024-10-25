class Solution {
public:
    static bool lenSort(string a,string b){
        return a.size()<b.size();
    }
    vector<string> removeSubfolders(vector<string>& folder) {
        sort(folder.begin(),folder.end(),lenSort);
        unordered_map <string,int> mp;
        vector<string> result;
        for(int i = 0;i < folder.size();i++){
            string res = "";
            for(int j = 0;j < folder[i].size();j++){
                res+=folder[i][j];
                if(res[res.size()-1]!='/'){
                    if(mp[res]){
                        if(j+1==folder[i].size() || folder[i][j+1]=='/') break;
                    }
                }
            }
            if(mp[res]==0) {
                mp[res]++;
                result.push_back(res);
            }
        }
        return result;
    }
};