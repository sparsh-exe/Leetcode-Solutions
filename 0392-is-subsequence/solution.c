bool isSubsequence(char* s, char* t) {
    int i, j = 0;
    for(i=0;t[i]!='\0';i++){
        if(t[i]==s[j]){
            j++;
        }
    }
    if(s[j]=='\0')
        return true;
    else
        return false;
}
