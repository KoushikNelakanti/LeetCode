class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0,j = 0;
        vector<int> res;
        while(i < nums1.size() && j < nums2.size() && i<m){
            if(nums1[i]<nums2[j]){
                res.push_back(nums1[i]);
                i++;
            }
            else{
                res.push_back(nums2[j]);
                j++;
            }
        }
        while(i<nums1.size() && i<m){
            res.push_back(nums1[i]);
            i++;
        }
        while(j<nums2.size()){
            res.push_back(nums2[j]);
            j++;
        }
        nums1 = res;
    }
};