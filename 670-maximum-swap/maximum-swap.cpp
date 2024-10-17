class Solution {
public:
    int maximumSwap(int num) {
        if(num<12) return num; 
        vector<int> digit;
        while(num){
            digit.push_back(num%10);
            num/=10;
        }
        for(int i = digit.size()-1;i>=0;i--){
            int mx = i;
            for(int j = i-1;j>=0;j--){
                if(digit[i]!=digit[j] && digit[mx]<=digit[j]){
                    mx = j;
                }
            }
            if(mx!=i){
                int temp = digit[i];
                digit[i]=digit[mx];
                digit[mx]=temp;
                break;
            }
        }
        num = 0;
        for(int i = digit.size()-1;i>=0;i--){
            num=num*10+digit[i];
        }
        return num;

    }
};