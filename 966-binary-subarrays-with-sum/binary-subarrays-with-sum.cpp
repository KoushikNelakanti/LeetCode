class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map <int,int> lCount;
        unordered_map <int,int> rCount;
        int count=0,zero=0,sum=0,b=0;
        vector<int> v;
        for(int i = 0;i < nums.size();i++){
            if(nums[i]==1) v.push_back(i);
            if(nums[i]==0) zero++;
            lCount[i]=zero;
            if(nums[i]==1){
                zero=0;
            }
        }
        zero=0;
         for(int i = nums.size()-1;i>=0;i--){
            if(nums[i]==0) zero++;
            rCount[i]=zero;
            if(nums[i]==1){
                zero=0;
            }
        }
        if(goal==0){
            for(int i = 0;i < nums.size();i++){
                if(nums[i]==goal) count+=rCount[i];
            }
            return count;
        }
        else if(goal==1){
            for(int i = 0;i < nums.size();i++){
                if(nums[i]==goal) count+=1+lCount[i]+rCount[i]+(lCount[i]*rCount[i]);
            }
            return count;
        }
        int flag = 1,one = 0;
        for(int i = 0;i < nums.size();i++){
            if(nums[i]) one++;
            sum+=nums[i];
           if(sum==goal){
            count+=lCount[v[b]]*rCount[i]+lCount[v[b]]+rCount[i]+1;
            cout<<v[b]<<" "<<i<<" ";
            cout<<lCount[v[b]]<<" "<<rCount[i]<<endl;
            v[b] = i;
            sum-=1;
            b++;
           }
        }
         if(sum==goal){
            flag = 1;
            count+=lCount[v[b]]*rCount[nums.size()-1]+lCount[v[b]]+rCount[nums.size()-1]+1;
            // cout<<lCount[v[b]]+rCount[nums.size()-1]+1<<endl;
            cout<<v[b];
            sum-=1;
           }
        if(one==0) return 0;
        else return count;
    }
};