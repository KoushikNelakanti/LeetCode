class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        unordered_map<int,int> mp;
        for(int i = 0;i < flowerbed.size();i++){
            if(flowerbed[i]){
                mp[i]=1;
            }
            else mp[i]=0;
        }
        for(int i = 0;i < flowerbed.size();i++){
            if(mp[i-1]==0 && mp[i]==0 && mp[i+1]==0){
                flowerbed[i]=1;
                mp[i]=1;
                n--;
            }
        }
        return n<=0;
    }
};