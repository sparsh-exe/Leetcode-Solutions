class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int i=0,j,k;
        sort(nums.begin(),nums.end());
        while(i<nums.size()-2){
            if(i>0 && nums[i]==nums[i-1]){
                i++;
                continue;
            }
            j = i+1;
            k = nums.size()-1;
            for(j,k; j<k; ){
                if(nums[i] + nums[j] + nums[k] == 0){
                    ans.push_back({nums[i],nums[j],nums[k]});

                    while(j < k && nums[j] == nums[j + 1])
                        j++;

                    while(j < k && nums[k] == nums[k - 1])
                        k--;
                    
                    j++;
                    k--;
                }
                else if((nums[i]+nums[j]+nums[k])>0){
                    k--;
                }
                else{
                    j++;
                }
            }
            i++;
        }
        return ans;
    }
};
