class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       stack<int> st;
       st.push(nums[nums.size()-1]);
       for(int i = nums.size()-1;i>=0;i--){
        if(st.size() && st.top()!=nums[i]) st.push(nums[i]);
       }
       int size = st.size();
       int ind = 0;
       while(st.size()){
        nums[ind] = st.top();
        st.pop();
        ind++; 
       }
       return size;
    }
};