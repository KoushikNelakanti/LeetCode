class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        if(nums.size()==0) return 0;
        int xorSum = 0,num,count=0,sum = 0;
        for(int i = 1;i < pow(2,nums.size());i++){
            xorSum = 0;
            num = i;
            count = 0;
            while(num){
                if(num%2) xorSum = xorSum^nums[count];
                num/=2;
                count++;
            }
            sum+=xorSum;
        }
        return sum;
    }
};