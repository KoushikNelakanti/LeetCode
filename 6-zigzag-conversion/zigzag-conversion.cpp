class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1) return s;
        vector<int> ind;
        int position = 1,count = 1,carry=0;
        for(int i = 0;i < s.size();i++){
           cout<<s[i]<<" "<<position<<endl;
           ind.push_back(position);
           if(position>=numRows){
            count=0;
           }
           else if(position<=1) count=1;
            if(count%2){
                position++;
            }
            else{
                position--;
            }
        }
        string res = "";
        for(int i = 1;i <=numRows;i++){
            for(int j = 0;j < ind.size();j++){
                if(i==ind[j]) res+=s[j];
            }
        }
        return res;
    }
};