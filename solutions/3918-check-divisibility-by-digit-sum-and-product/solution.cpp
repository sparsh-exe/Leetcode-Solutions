class Solution {
public:
    bool checkDivisibility(int n) {
        int s = 0, p = 1,t;
        t = n;
        while(t>0){
            s+=(t%10);
            p = p*(t%10);
            t/=10;
        }
        int sum = s + p;
        if(n%sum==0)
            return true;
        return false;
    }
};
