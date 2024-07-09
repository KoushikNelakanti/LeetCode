class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int a = customers[0][0],b = customers[0][1];
        int currTime = a+b;
        double waitingTime = b;
        for(int i = 1;i < customers.size();i++){
            if(currTime>customers[i][0]){
                waitingTime+=abs(currTime-customers[i][0]);
            }
                currTime = max(currTime,customers[i][0]);
                currTime+=customers[i][1];
                waitingTime+=customers[i][1];
        }
        double average = waitingTime/customers.size();
        return average;
    }
};