/*
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0)
            return false;
        double res = log2(n);
        return res == (int)res;
    }
};
*/

class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n > 0 && (n & (n - 1)) == 0;
    }
};
