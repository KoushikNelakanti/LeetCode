class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()) return false;
        for(int i = 0;i < s.size();i++){
            int count = 0,flag = 0,j = 0;
            for(j = 0;j < goal.size();j++){
                if(i+j<goal.size() && s[i+j]==goal[j]){
                    flag = 1;
                    count++;
                }
                else {
                    flag = 0;
                    break;
                }
            }
            cout<<j<<" "<<count<<endl;
             if(flag==0 && count>0){
                int value = goal.size()-count;
                for(int l =0;l <=value;l++){
                    if(j+l<goal.size()  && goal[j+l]==s[l]) count++;
                }
            }
            cout<<count<<endl;
            if(count==goal.size()){
                return true;
            }
        }
        return false;
    }
};