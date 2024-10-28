class Solution {
public:
    int mySqrt(int x) {
        if(x==0) return 0;
     int l = 0;
     int h = x;
     long long result;
     while(l<=h){
        long long m = (l+h)/2;
     cout<<l<<" "<<h<<" "<<m<<endl;
        if(m*m==x){
            result = m;
            break;
        }
        if(m*m<x){
            l = m+1;
        }
        else{
            h = m-1;
        }
     }
     if(result && result*result<=x){
        return result;
     }
     else if(result) return result-1;
     else return l;
    }
};