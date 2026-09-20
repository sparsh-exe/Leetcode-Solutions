class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = strs[0];

        for (int i = 1; i < strs.size(); i++) {
            int j = 0;

            while (j < ans.length() &&
                   j < strs[i].length() &&
                   ans[j] == strs[i][j]) {
                j++;
            }

            ans = ans.substr(0, j);

            if (ans.empty())
                return "";
        }

        return ans;
    }
};

/*
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        if(strs.size()==1)
            return strs[0];
        if(strs[0].length()==0)
            return "";
        for(int k = 0;k<strs[0].length();k++){
            bool flag = true;
            for(int j=1;j<strs.size();j++){
                if(k >= strs[j].length() || strs[0][k] != strs[j][k]){
                    flag = false;
                    break;
                }
            }
            if(flag){
                ans += strs[0][k];
                k++;
            }
            else
                break;
        }
        return ans;
    }
};
*/

