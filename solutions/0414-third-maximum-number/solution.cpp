class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n = nums.size();
        int c = 1;
        int i = n-1;
        sort(nums.begin(),nums.end());
        int max = nums[n-1];
        while(i>=0 && c<3){
            if(max==nums[i]){
                i--;
                continue;
            }
            else{
                c++;
                max=nums[i];
                i--;
            }
        }
        if(c!=3){
            return nums[n-1];
        }
        return max;
    }
};
