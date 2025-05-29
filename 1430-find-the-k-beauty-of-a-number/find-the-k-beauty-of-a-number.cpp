class Solution {
public:
    int divisorSubstrings(int num, int k) {
        vector<int> v;
        int n=num;
        while(n){
            v.push_back(n%10);
            n/=10;
        }
        n = 0;
        reverse(v.begin(),v.end());
        int i = 0,j = 0,count = 0,b=0;
        while(j<v.size()){
            if((j-i)==k){
                if(n && num%n==0){
                    count++;
                }
                n=n-pow(10,k)*v[b++]/10;
                i++;
            }
            n=n*10+v[j];
            j++;
        }
        if((j-i)==k){
                if(n!=0 && num%n==0){
                    cout<<j<<" "<<n<<endl;
                    count++;
                }
            }
        return count;
    }
};