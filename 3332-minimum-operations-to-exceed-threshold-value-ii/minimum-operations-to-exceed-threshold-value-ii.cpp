class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue <long long, vector<long long>, greater<long long> > pq; 
        for(int i = 0;i < nums.size();i++){
            pq.push(nums[i]);
        }
        int count =0;
        while(pq.size()>1){
            if(pq.top()>=k) break;
            long long a = pq.top();
            pq.pop();
            long long b = pq.top();
            pq.pop();
            // cout<<a<<" "<<b<<endl;
            pq.push(min(a,b)*2+max(a,b));
            count++;
        }
        return count;
    }
};