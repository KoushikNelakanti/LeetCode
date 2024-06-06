class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        sort(hand.begin(),hand.end());
        int prev = 0,count = 1;
        for(int i = 0;i < hand.size();i++){
            if(hand[i]==-1) continue;
            prev = hand[i];
            hand[i]=-1;
            count = 1;
            for(int j = 0;j < hand.size();j++){
                if(hand[j]==prev+1){
                    prev = hand[j];
                    hand[j]=-1;
                    count++;
                }
                if(count==groupSize){
                    break;
                }
            }
            if(count!=groupSize) return false;
        }
        return true;
    }
};