class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<int> s;
        for(int i = 0;i < logs.size();i++){
            if(logs[i]=="../"){
                if(s.size()) s.pop();
            }
            else if(logs[i]!="./"){
                s.push(1);
            }
        }
        return s.size();
    }
};