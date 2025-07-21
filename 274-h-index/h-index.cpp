class Solution {
public:
    int hIndex(vector<int>& citations) {
        int mx = 0;
        for(int i = 0;i < citations.size();i++){
            mx = max(mx,citations[i]);
        }
        int mxCount = 0,mxValue = 0;
        for(int i = 1;i <=mx;i++){
            int count = 0;
            for(int j = 0;j < citations.size();j++){
                if(citations[j]>=i) count++;
            }
            if(mxValue<count){
                mxValue = i;
                mxCount = count;
            }

        }
        return mxValue;
    }
};