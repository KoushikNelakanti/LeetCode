class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0,j = height.size()-1;
        long long mx = min(height[i],height[j])*(j-i);
        while(i<=j){
            int value = min(height[i],height[j])*abs(j-i);
            if(mx<value) mx = value;
            if(height[i]<height[j]) i++;
            else j--;
        }
        return mx;
    }
};