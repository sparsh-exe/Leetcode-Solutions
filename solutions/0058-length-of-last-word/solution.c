int lengthOfLastWord(char* s) {
    int j,c=0,i,space=0;
    for(i=1;s[i]!='\0';i++){
        if(s[i-1]==' '&& s[i]!=' '){
            space = i-1;
        }
    }
    for(j=space;s[j]!='\0';j++){
        if(s[j]!=' ')
            c++;
    }
    return c;
}
