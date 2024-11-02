class Solution {
public:
    bool isCircularSentence(string sentence) {
        if(sentence.size()==1) return true;
        int ele = 32;
        for(int i = 0;i  < sentence.size();i++){
            if(sentence[i]==' ')
            {
                int a = sentence[i-1],b = sentence[i+1];
                a = a^(1<<5);
                b = b^(1<<5);
                if(a!=b) return false;
            }
        }
        int a = sentence[0],b = sentence[sentence.size()-1];
        a = a^(1<<5);
        b = b^(1<<5); 
        return a==b;
    }
};