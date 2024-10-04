class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(),skill.end());
        int value = skill[0]+skill[skill.size()-1];
        long long total = 0;
        int i = 0,j = skill.size()-1;
        while(i<j){
            if(value!=(skill[i]+skill[j])) return -1; 
            total+=skill[i]*skill[j];
            i++;
            j--;
        }
        return total;
    }
};