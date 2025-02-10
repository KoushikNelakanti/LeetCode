class Solution {
public:
    int compress(vector<char>& chars) {
        string res = "";
        char ch = chars[0];
        int count = 1,len = 0;
        for(int i = 1;i < chars.size();i++){
            if(ch==chars[i]) count++;
            else{
                if(count==1){
                    res+=ch;
                }
                else{
                    res+=ch;
                    res+=to_string(count);
                }
                ch = chars[i];
                count = 1;
            }
        }
        if(count==1){
                    res+=ch;
                }
                else{
                    res+=ch;
                    res+=to_string(count);
                }
        cout<<res<<endl;
        chars.clear();
        for(int i = 0;i < res.size();i++){
            chars.push_back(res[i]);
        }
        return chars.size();
    }
};