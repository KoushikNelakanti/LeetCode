class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        int result = 0;
        int mx = 0;
        for(int i = 0;i < nums.size();i++){
            mx = mx | nums[i];
        }
        for(int i = 1;i < pow(2,nums.size());i++){
            int n = i,x = 0,count = 0;
            while(n){
                if(n%2) x = x | nums[count];
                n/=2;
                count++;
            }
            if(x==mx) result++;
        }
        return result;
    }
};