class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> ordered(heights);
        sort(ordered.begin(),ordered.end());
        int count = 0;
        for(int i = 0;i < heights.size();i++){
            if(heights[i]!=ordered[i]) count++;
        }
        return count;
    }
};