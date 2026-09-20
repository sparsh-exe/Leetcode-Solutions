class Solution {
public:
    string reverseWords(string s) {
    int i,j;
    string ans;
    for(i=s.length()-1;i>=0;i--){
        if((i == 0 || s[i-1] == ' ') && s[i] != ' '){
            j = i;
            while(s[j]!=' ' && s[j]!='\0'){
                ans = ans+s[j++];
            }
            ans = ans + ' ';
        }
    }
    ans.pop_back();
    return ans;
    }
};
