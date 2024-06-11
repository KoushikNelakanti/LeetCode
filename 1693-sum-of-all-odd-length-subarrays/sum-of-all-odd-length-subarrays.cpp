class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum = 0;
        for(int i = 0;i < arr.size();i++){
            for(int j = i;j < arr.size();j++){
                if((i-j)%2) continue;
                for(int l = i;l<=j;l++){
                    sum+=arr[l];
                } 
            }
        }
        return sum;
    }
};