class Solution {
public:
    string getDigitSum(string s,int k){
        int i = 0,ind = 0,sum=0,l=0;
        string total="";
        while(i!=s.size()){
            ind=i;
            sum=0;
            l=k;
            while( l-- && i<s.size()){
                sum+=s[i]%48;
                i++;
            }
            cout<<sum<<endl;
            if(sum>=10){
                string s = "";
                while(sum){
                    s+=sum%10+48;
                    sum/=10;
                }
                reverse(s.begin(),s.end());
                total+=s;
            }
            else total+=sum+48;
        }
        return total;
    }
    string digitSum(string s, int k) {
        while(s.size()>k){
            s=getDigitSum(s,k);
        }
        return s;
    }
};