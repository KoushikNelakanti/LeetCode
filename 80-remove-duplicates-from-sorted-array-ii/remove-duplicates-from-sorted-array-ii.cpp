class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int index = 0,count = 1,ele = -1000000;
        for(int i = 0;i < nums.size();i++){
            if(ele!=nums[i]){
                nums[index++] = nums[i];
                ele = nums[i];
                count = 1;
            }
            else if(count==1){
                nums[index++] = nums[i];
                count = 2;
            }
        }
        return index;
    }
};