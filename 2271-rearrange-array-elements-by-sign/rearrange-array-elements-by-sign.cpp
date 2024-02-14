class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
      vector<int> positive,negative,res;
      int i = 0,j = 0,c=0;
      for(i = 0;i < nums.size();i++){
          if(nums[i]<0) negative.push_back(nums[i]);
          else positive.push_back(nums[i]);
      }
      i = 0;
      while(i!=positive.size() || j!=negative.size()){
          if(c%2==0) res.push_back(positive[i++]);
          else res.push_back(negative[j++]);
          c++;
      }
      return res;
    }
};