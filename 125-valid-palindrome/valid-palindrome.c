bool ischar(char ch){
    return (ch>='a' && ch<='z') || (ch>='A' && ch<='Z') ||(ch>='0' && ch<='9');
}
bool isPalindrome(char* s) {
    int i = 0,j = strlen(s)-1;
    while(i<j){
       if(i<j && !ischar(s[i])) i++;
       if(j>i && !ischar(s[j])) j--;
       if(j>i && ischar(s[i]) && ischar(s[j])){
        char a = tolower(s[i]),b = tolower(s[j]);
        if(a!=b) return false;
        i++;
        j--;
       }
    }
    return true;
}