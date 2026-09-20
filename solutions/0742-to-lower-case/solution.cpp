class Solution {
public:
    string toLowerCase(string s) {
        int i;
        for(i=0;i<s.length();i++){
            if(s[i]>='A' && s[i]<='Z')
                s[i] += 32;
        }
        return s;
    }
};
