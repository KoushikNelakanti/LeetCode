class Solution {
public:
    static int digitSum(int a){
        int s = 0;
        while(a){
            s+=a%10;
            a/=10;
        }
        return s;
    }
    static bool csSort(int a,int b){
        int s1 = digitSum(a),s2 = digitSum(b);
        return s1<s2;
    }
    int maximumSum(vector<int>& nums) {
        if(nums.size()==1) return -1;
        unordered_map<int,vector<int>> mp;
        int s = 0;
       for(int i = 0;i < nums.size();i++){
        int value = digitSum(nums[i]);
        mp[value].push_back(nums[i]);
       }
       unordered_map<int,vector<int>>::iterator it = mp.begin();
        s = 0;
       while(it!=mp.end()){
        sort(it->second.begin(),it->second.end());
        if(it->second.size()>1){
            s = max(s,it->second[it->second.size()-1]+it->second[it->second.size()-2]);
        }
        ++it;
       }
        return s==0?-1:s;
    }
};