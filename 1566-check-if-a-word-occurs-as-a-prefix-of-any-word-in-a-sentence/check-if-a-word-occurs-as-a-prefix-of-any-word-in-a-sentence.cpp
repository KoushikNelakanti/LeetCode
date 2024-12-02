class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int index = 0,flag = 0,spaces = 0;
        for(int i = 0;i < sentence.size();i++){
            index = 0;
            if(sentence[i]==' ') spaces++;
            if(i==0 || sentence[i-1]==' '){
                index = 0,flag = 0;
                while(index<searchWord.size() && i<sentence.size() && sentence[i]==searchWord[index]){
                    i++;
                    index++;
                    flag = 1;
                }
               if(flag) i--;
            }
            if(index==searchWord.size()) return spaces+1;
        }
            if(index==searchWord.size()) return spaces+1;
            else return -1;
    }
};