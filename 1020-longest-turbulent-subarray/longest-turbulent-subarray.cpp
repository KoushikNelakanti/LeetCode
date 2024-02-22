class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {
        int maxLength1=0,maxLength2=0,max=0;
         for(int i = 1;i < arr.size();i++){
             max=0;
           for(int j = i;j < arr.size();j++){
                if(j%2==0 && arr[j]>arr[j-1]){
                max++;
            }
            else if(j%2 && arr[j]<arr[j-1]){
                max++;
            }
            else{
                if(maxLength1<max) maxLength1=max;
                break;
            }
        if(maxLength1<max) maxLength1=max;
           }
        }
        max=0;
         for(int i = 1;i < arr.size();i++){
             max=0;
           for(int j = i;j < arr.size();j++){
                if(j%2==0 && arr[j]<arr[j-1]){
                max++;
            }
            else if(j%2 && arr[j]>arr[j-1]){
                max++;
            }
            else{
                if(maxLength2<max) maxLength2=max;
                break;
            }
        if(maxLength2<max) maxLength2=max;
           }
        }
        if(maxLength1>maxLength2) return 1+maxLength1;
        else return 1+maxLength2;
    }
};