class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string> res;
        unordered_map <string,int> mp;
        string s = "";
        for(int i = 0;i < s1.size();i++){
            if(s1[i]==' '){
                cout<<s<<endl;
                mp[s]++;
                s = "";
            }
            else{
                s+=s1[i];
            }
        }
        mp[s]++;
        s = "";
        for(int i = 0;i < s2.size();i++){
            if(s2[i]==' '){
                cout<<s<<endl;
                mp[s]++;
                s = "";
            }
            else{
                s+=s2[i];
            }
        }
        mp[s]++;
        unordered_map <string,int>::iterator it = mp.begin();
        while(it!=mp.end()){
            cout<<it->first<<" "<<it->second<<endl;
            if(it->second<2){
                res.push_back(it->first);
            }
            ++it;
        }
        return res;
    }
};