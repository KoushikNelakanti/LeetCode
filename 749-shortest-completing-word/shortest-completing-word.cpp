class Solution {
public:
    int check(int arr1[],int arr2[]){
        for(int i = 0;i < 26;i++){
            if(arr1[i]>0 && arr2[i]<arr1[i]) return 0;
        }
        return 1;
    }
    void print(int arr[]){
        for(int i = 0;i < 26;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        int word[26]={};
        for(int i = 0;i < licensePlate.size();i++){
            if(licensePlate[i]>='a' && licensePlate[i]<='z'){
                word[licensePlate[i]%97]++;
            }
            else if(licensePlate[i]>='A' && licensePlate[i]<='Z'){
                word[licensePlate[i]%65]++;
            }
        }
       int max = 0,flag=0;
        for(int i = 0;i < words.size();i++){
            int arr[26]={};
            for(int j = 0;j < words[i].size();j++){
                 if(words[i][j]>='a' && words[i][j]<='z'){
                arr[words[i][j]%97]++;
            }
            else if(words[i][j]>='A' && words[i][j]<='Z'){
                arr[words[i][j]%65]++;
            }
            }
            if(check(word,arr) && flag==0){
                flag=1;
                max = i;
            }
            else if(check(word,arr)){
                if(words[i].size()<words[max].size()) max = i;
            }
        }
        return words[max];
    }
};