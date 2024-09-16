class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> minutes;
        int time;
        for(int i = 0;i < timePoints.size();i++){
            time = ((timePoints[i][0]%48)*10+(timePoints[i][1]%48))*60+(timePoints[i][3]%48)*10+(timePoints[i][4]%48);
            minutes.push_back(time);
        }
        int minTime = 1440,a,b;
        sort(minutes.begin(),minutes.end());
        for(int i = 1;i < minutes.size();i++){
            a = minutes[i-1];
             b = minutes[i];
            minTime = min(minTime,abs(a-b));
            cout<<minTime<<endl;
            minTime = min(minTime,abs(abs(1440-a)+b));
             cout<<minTime<<endl;
            minTime = min(minTime,abs(abs(1440-b)+a));
             cout<<minTime<<endl;
            minTime = min(minTime,abs(abs(1440-a)-abs(1440-b)));
             cout<<minTime<<endl;
        }
        a = minutes[0];
        b = minutes[minutes.size()-1];
          minTime = min(minTime,abs(a-b));
            minTime = min(minTime,abs(abs(1440-a)+b));
            minTime = min(minTime,abs(abs(1440-b)+a));
            minTime = min(minTime,abs(abs(1440-a)-abs(1440-b)));
        return minTime;
    }
};