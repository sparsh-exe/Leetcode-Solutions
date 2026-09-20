class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int total = 0;
        for(int i = 0; i< nums.size();i++){
            int c = 0, x = nums[i];
            while(x>0){
                x/=10;
                c++;
            }
            if(c%2==0){
                total++;
            }
        }
        return total;
    }
};
