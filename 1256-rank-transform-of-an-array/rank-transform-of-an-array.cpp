class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        map<int,int> mp;
        for(int i = 0;i < arr.size();i++){
            mp[arr[i]]++;
        }
        map<int,int>::iterator it = mp.begin();
        int count = 1;
        while(it!=mp.end()){
            it->second = count;
            count++;
            ++it;
        }
        for(int i = 0;i < arr.size();i++){
            arr[i]=mp[arr[i]];
        }
        return arr;
    }
};