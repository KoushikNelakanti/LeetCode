class Solution {
public:
    string removeOccurrences(string s, string part) {
        auto found = s.find(part);
        while(found!=string::npos){
            // cout<<s<<endl;
            s.erase(found,part.size());
            // cout<<s<<endl;
            found = s.find(part);
        }
        return s;
    }
};