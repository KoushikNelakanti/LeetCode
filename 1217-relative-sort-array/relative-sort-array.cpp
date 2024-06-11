class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
     map <int,int> mp;
     for(int i = 0;i < arr1.size();i++){
        mp[arr1[i]]++;
     }
     int ind = 0,arrInd = 0;
     while(ind!=arr2.size()){
        while(mp[arr2[ind]]--) arr1[arrInd++]=arr2[ind];
        ind++;
     }
     map <int,int>::iterator it = mp.begin();
     while(it!=mp.end()){
        while(it->second>0){
            cout<<it->first<<endl;
            arr1[arrInd++]=it->first;
            it->second-=1;
        }
        ++it;
     }   
     return arr1;
    }
};