class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i, j;
        int a = word1.length();
        int b = word2.length();
        string ans = "";
        for(i=0,j=0; i < a || j < b;){
            if(word1[i]!='\0'){
                ans +=word1[i];
                i++;
            }
            if(word2[j]!='\0'){
                ans +=word2[j];
                j++;
            }
        }
        return ans;
    }
};
