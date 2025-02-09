class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> res;
        for(int i = 0;i <= n;i++){
            int count = 0;
            int digit = i;
            while(digit){
                count+=digit%2;
                digit/=2;
            }
            res.push_back(count);
        }      
        return res;
    }
};