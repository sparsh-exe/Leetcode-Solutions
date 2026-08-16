/*
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i,j,c,sum,min;
        min = nums.size()+1;
        for(i=0;i<nums.size();i++){
            sum = 0;
            c = 0;
            for(j=i;j<nums.size();j++){
                sum = sum + nums[j];
                c++;
                if(sum>=target){
                    if(c<min) min = c;
                    break;
                }
            }
            
        }
        if(min==nums.size()+1) return 0;
        return min;
    }
};
*/
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i,j=0,c,sum,mini;
        mini = nums.size()+1;
        sum = 0;
        c = 0;
        for(i=0;i<nums.size();i++){
            
            sum = sum+nums[i];
            c++;
            while(sum>=target){
                mini = min(mini,c);
                sum -= nums[j];
                c--;
                j++;
            }
        }
        if(mini==nums.size()+1) return 0;
        return mini;
    }
};
