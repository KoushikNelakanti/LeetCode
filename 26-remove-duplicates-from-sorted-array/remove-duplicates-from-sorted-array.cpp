class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        stack<int> s;
        int count = 1;
        s.push(nums[0]);
        for(int i = 1;i < nums.size();i++){
            if(s.size() && s.top()<nums[i]){
                s.push(nums[i]);
                count++;
            }
        }
        for(int i = count-1;i>=0;i--){
            nums[i]=s.top();
            s.pop();
        }
        return count;

    }
};