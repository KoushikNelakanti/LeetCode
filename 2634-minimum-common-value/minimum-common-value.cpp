class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int i = 0,j = 0;
        while(i<nums1.size()){
            while(j!=nums2.size() && nums1[i]>nums2[j]){
                j++;
            }
            if(j!=nums2.size() && nums1[i]==nums2[j]) return nums1[i];
            i++;
        }
        return -1;
    }
};