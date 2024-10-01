class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        if(k==1) return true;
        unordered_map <int,int> mp;
        int count = 0;
        for(int i  = 0;i < arr.size();i++){
            int value = arr[i]%k;
            if(arr[i]<0) value = k-abs(arr[i])%k;
           if(mp[k-value]){
            mp[k-value]--;
            count++;
           }
           else if(value==0 && mp[value]){
            mp[value]--;
            count++;
           }
           else mp[value]++;
        }
        if(count!=arr.size()/2) return false;
        else return true;
    }
};