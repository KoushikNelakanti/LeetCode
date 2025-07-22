class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res;
        int left = 0,right = numbers.size()-1;
        while((numbers[left]+numbers[right])!=target){
            if((numbers[left]+numbers[right])<target){
                left++;
            }
            else{
                right--;
            }
        }
        res.push_back(left+1);
        res.push_back(right+1);
        return res;
        }
};