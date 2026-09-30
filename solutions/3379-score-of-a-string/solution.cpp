class Solution {
public:
    int scoreOfString(string s) {
        int sum = 0;
        for(int i = 1; i<s.size(); i++){
            int diff = s[i-1] - s[i];
            if(diff<0)
                sum+= diff*(-1);
            else
                sum+= diff;
        }
        return sum;
    }
};
