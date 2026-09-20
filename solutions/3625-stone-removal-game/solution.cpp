class Solution {
public:
    bool canAliceWin(int n) {
        int i;
        for(i=10;i>=0;i--){
            n-=i;
            if(n<0){
                break;
            }
        }
        if(i%2==0)
            return false;
        return true;
    }
};
