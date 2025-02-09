class Solution {
public:
    int rob(vector<int>& nums) {
        int prev = nums[0],prev2 = 0,curr = 0;
        for(int i = 1;i < nums.size()-1;i++){
            int pick = nums[i];
            if(i>1) pick+=prev2;
            int notPick = prev;
            curr = max(pick,notPick);
            prev2 = prev;
            prev = curr;
        }
        int mx = prev;
        int next = nums[nums.size()-1],next2 = 0;
        for(int i = nums.size()-2;i>=1;i--){
            int pick = nums[i];
            if((i+2)<nums.size()) pick+=next2;
            int notPick = next;
            curr = max(pick,notPick);
            next2 = next;
            next = curr;
        }
        return max(prev,next);
    }
};