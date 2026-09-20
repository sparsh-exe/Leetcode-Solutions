class Solution {

public:
    int encrypt(int num){
        int e = 0,t, c=0,m = 0;
        t = num;
        while(t>0){
            c++;
            m = max(m,t%10);
            t = t/10;
        }
        for(;c>0;c--){
            e = (e*10)+m;
        }
        return e;
    }
    int sumOfEncryptedInt(vector<int>& nums) {
        int sum = 0;
        for(int i = 0;i<nums.size();i++){
            int en = encrypt(nums[i]);
            sum+=en;
        }
        return sum;
    }
};
