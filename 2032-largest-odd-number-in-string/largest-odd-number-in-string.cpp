class Solution {
public:
    string largestOddNumber(string num) {
        string res = "";
        int maxIndex = -1;
        for(int i = 0;i < num.size();i++){
            if((num[i]%48)%2){
                maxIndex = i;
            }
        }
        for(int i = 0;i <=maxIndex;i++){
            res+=num[i];
        }
        return res;
    }
};