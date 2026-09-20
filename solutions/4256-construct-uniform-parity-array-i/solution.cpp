class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        return true;
    }
};
/*
class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int i = 0, j, n = nums1.size();
        vector<int> nums2(n);
        for(int i = 0;i<nums1.size();i++){
            j=i+1;
            if(j<n)
                nums2[i] = nums1[i] - nums1[j];
            else
                nums2[i] = nums1[i];
        }
        bool odd = true;
        bool even = true;
        for(i = 0;i<n;i++){
            
            if(nums2[i]%2==0)
                odd = false;
            else
                even = false;
        }
        return(even || odd);
    }
};
*/
