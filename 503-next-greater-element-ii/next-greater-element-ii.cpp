class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> res;
      int i = 0,j = 1,flag=0;
      for(int i = 0;i < nums.size()-1;i++){
          flag=0;
          for(int j = i+1; j!=i;j=(j+1)%(nums.size())){
              if(i+1==nums.size()){
                  cout<<j<<" ";
              }
              if(nums[i]<nums[j]){
                  res.push_back(nums[j]);
                  flag=1;
                  break;
              }
          }
          if(flag==0){
              res.push_back(-1);
          }
      }
      int num = nums[nums.size()-1],l=0;
      while(l!=nums.size()-1){
          if(num<nums[l]){
              res.push_back(nums[l]);
              break;
          }
          l++;
      }
      if(l==nums.size()-1) res.push_back(-1);
      return res;
    }
};