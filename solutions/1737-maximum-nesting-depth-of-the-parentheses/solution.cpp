class Solution {
public:
    int maxDepth(string s) {
        int x = 0, ans = 0;
        for(char c : s){
            if(c == '(' ) x++;
            if(c == ')' ) x--;
            ans = max(ans, x);
        }
        return ans;
    }
};
