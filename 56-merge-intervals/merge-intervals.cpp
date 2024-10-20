class Solution {
public:
    int getIndex(int ind,vector<vector<int>> intervals){
        for(int i = 1+ind;i < intervals.size();i++){
            if(intervals[i][0]<=intervals[i-1][1]){
                return i;
            }
        }
        return -1;
    }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> res;
        stack<vector<int>> st;
        st.push(intervals[0]);
        for(int i = 1;i <intervals.size();i++){
            // int a=intervals[i][0],b=intervals[i][1];
            if(st.size() && st.top()[1]>=intervals[i][0]){
                st.top()[1]=max(st.top()[1],intervals[i][1]);
            }
            else{
                st.push(intervals[i]);
            }
        }
        while(st.size()){
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};