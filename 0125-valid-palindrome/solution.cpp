/*
class Solution {
public:
    bool isPalindrome(string s) {
        string temp = "";
        int i,j;
        for(i=0;i<s.length();i++){
            if(isalnum(s[i]))
                temp += tolower(s[i]);
        }
        for(i=0,j=temp.length()-1;i<j;i++,j--){
            if(temp[i]!=temp[j])
                return false;
        }
        return true;
    }
};
*/
class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.length()-1;
        while(i<j){
            if(!isalnum(s[i])) i++;
            else if(!isalnum(s[j])) j--;
            else{
                if(tolower(s[i])!=tolower(s[j]))
                    return false;
                i++;
                j--;
            }
        }
        return true;
    }
};
