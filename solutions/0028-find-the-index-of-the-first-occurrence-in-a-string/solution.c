
int strStr(char* haystack, char* needle) {
    int i,j;
    for(i=0;haystack[i];i++){
        j=0;
        while(haystack[i+j] && needle[j] && haystack[i+j]==needle[j]){
            j++;
        }
        if(needle[j]=='\0')
            return i;
    }
    return -1;
}

/*
int strStr(char* haystack, char* needle) {
    for (i = 0; haystack[i]; i++) {
        int j = 0;

        while (haystack[i + j] && needle[j] &&
            haystack[i + j] == needle[j]) {
            j++;
        }

        if (needle[j] == '\0')
            return i;
        }
    }
    return -1;
}
*/
