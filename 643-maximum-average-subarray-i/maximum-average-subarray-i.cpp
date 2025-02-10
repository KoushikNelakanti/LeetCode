class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i = 0,j = 0,sum = 0,len = 0;
        double mx = -DBL_MAX,value = 0,val=0;
        while(j!=nums.size()){
            sum+=nums[j];
            while((j-i+1)>k){
                sum-=nums[i];
                i++;
            }
            if((j-i+1)==k){
                // cout<<i<<" "<<j<<" "<<sum<<" "<<endl;
                value = (1.0)*sum/k;
                if(value>mx) mx = value;
            }
            j++;
        }
        return mx;
    }
};