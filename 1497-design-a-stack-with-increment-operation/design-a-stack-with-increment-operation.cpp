class CustomStack {
public:
    stack<int> s,temp;
    int maxSize = 0;
    CustomStack(int maxSize) {
        this->maxSize = maxSize;
    }
    
    void push(int x) {
        if(s.size()<maxSize){
            s.push(x);
        }
    }
    
    int pop() {
      int val = -1;
      if(s.size()){
        val = s.top();
        s.pop();
      }
      return val;
    }
    
    void increment(int k, int val) {
        int count = 0;
        if(s.size()>=k){
            count = s.size()-k;
        }
            while(s.size()){
                if(count==0) temp.push(s.top()+val);
                else {
                    temp.push(s.top());
                    count--;
                }
                s.pop();
            }
            while(temp.size()){
                s.push(temp.top());
                temp.pop();
            }

    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */