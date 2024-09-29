class AllOne {
public:
unordered_map <string,int> mp;
unordered_map <string,int>::iterator it ;
int maxCount = 200000;
int size = 0;
    AllOne() {
        size = 1;
    }
    
    void inc(string key) {
        mp[key]++;
        if(mp[key]>maxCount) maxCount = mp[key];
    }
    
    void dec(string key) {
        mp[key]--;
        if(mp[key]==0) mp.erase(key);
    }
    
    string getMaxKey() {
        int count = 0;
        string s="";
        it = mp.begin();
        while(it!=mp.end()){
            if(it->second>count){
                count = it->second;
                s = it->first;
            }
            ++it;
        }
        return s;
    }
    
    string getMinKey() {
        int count = maxCount;
         string s="";
        it = mp.begin();
        while(it!=mp.end()){
            if(it->second<count){
                count = it->second;
                s = it->first;
            }
            ++it;
        }
        return s;
    }
};

/**
 * Your AllOne object will be instantiated and called as such:
 * AllOne* obj = new AllOne();
 * obj->inc(key);
 * obj->dec(key);
 * string param_3 = obj->getMaxKey();
 * string param_4 = obj->getMinKey();
 */