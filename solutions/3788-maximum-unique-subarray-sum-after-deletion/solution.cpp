class Solution {
public:
    int maxSum(vector<int>& nums) {
        int i,ans = 0;
        sort(nums.begin(),nums.end());
        for(i = 0; i<nums.size()-1;i++){
            if(nums[i]<0)
                continue;
            if(nums[i]==nums[i+1])  
                continue;
            ans+=nums[i];
        }
        ans+=nums[i];
        return ans;
    }
};
