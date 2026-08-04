class Solution(object):
    def findMissingElements(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        ans = []
        m = max(nums)
        mi = min(nums)
        for i in range(mi,m):
            if i not in nums:
                ans.append(i) 
        ans.sort()
        return ans
        
