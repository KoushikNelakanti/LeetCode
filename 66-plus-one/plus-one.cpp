class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1;
        for(int i = digits.size()-1;i>=0;i--){
            if(carry+digits[i]<10){
                digits[i]+=carry;
                carry = 0;
            }
            else{
                digits[i]=0;
            }
        }
        if(carry){
            digits.insert(digits.begin(),1);
        }
        return digits;
    }
};