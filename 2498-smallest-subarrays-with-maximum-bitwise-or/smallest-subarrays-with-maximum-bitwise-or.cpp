class Solution {
public:
    long long getMaxOr(vector<pair<int,int>> mx){
        long long value = 0;
        for(int i = 0;i < mx.size();i++){
            if(mx[i].first){
                value = value+pow(2,i);
            }
        }
        return value;
    }
    vector<pair<int,int>> setCurrentOr(vector<pair<int,int>> total,long long num){
        int count = 0;
            while(num){
                if(num%2){
                    total[count].first = 1;
                    total[count].second+=1;
                }
                num/=2;
                count++;
            }
            return total;
    }
    vector<pair<int,int>> getUpdatedOr(vector<pair<int,int>> total,long long num){
         int count = 0;
         while(num){
                if(num%2){
                    total[count].second-=1;
                    if(total[count].second==0) total[count].first = 0;
                }
                num/=2;
                count++;
            }
            return total;
    }
    vector<int> smallestSubarrays(vector<int>& nums) {
        vector<pair<int,int>> total,current;
        for(int i = 0;i < 64;i++){
            current.push_back({0,0});
            total.push_back({0,0});
        }
        for(int i = 0;i < nums.size();i++){
           total = setCurrentOr(total,nums[i]);
        }
        int i = 0,j = 0;
        long long mx = getMaxOr(total);
        long long curr = 0;
        vector<int> result;
        while(j!=nums.size()){
            current = setCurrentOr(current,nums[j]);
            curr = curr | nums[j];
            check: if(curr==mx && i<nums.size()){
                int val = j-i+1;
                if(val<=0) val = 1;
                result.push_back(val);
                total = getUpdatedOr(total,nums[i]);
                mx = getMaxOr(total); 
                current = getUpdatedOr(current,nums[i]);
                curr = getMaxOr(current);
                i++;
                goto check;
            }
            j++;
        }
        return result;

    }
};