class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map <int,int> mp;
        for(int i = 0;i < arr.size();i++){
            mp[arr[i]]++;
        }
        unordered_map<int,int>::iterator it=mp.begin();
        int c = 0;
        vector<int> freq;
        while(it!=mp.end()){
            freq.push_back(it->second);
            ++it;
        }
        sort(freq.begin(),freq.end());
        for(int i = 0;i < freq.size();i++){
            if(freq[i]>=k){
                freq[i]-=k;
                k=0;
                break;
            }
            else{
                k-=freq[i];
                freq[i]=0;
            } 
        }
        for(int i = 0;i < freq.size();i++){
            if(freq[i]!=0) c++;
        }
        return c;
    }
};