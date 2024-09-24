class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_map <int,int> mp;
        for(int i = 0;i < arr1.size();i++){
            int len = log10(arr1[i])+1;
            long long div = pow(10,len);
            len = 1;
            while(div!=0){
                mp[arr1[i]/div]=len;
                div/=10;
                len++;
            }
        }
        int maxLen = 0;
         for(int i = 0;i < arr2.size();i++){
            int len = log10(arr2[i])+1;
            long long div = pow(10,len);
            while(div!=0){
                maxLen = max(maxLen,mp[arr2[i]/div]);
                div/=10;
            }
        }
        if(maxLen!=0) return maxLen-1;
        else return 0;

    }
};