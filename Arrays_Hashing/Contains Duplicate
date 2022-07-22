class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        sorted_nums = sorted(nums)
        t = 0
        length = len(sorted_nums) -1
        for i in sorted_nums:
            if (t+1) <= length:
                if i == sorted_nums[t+1]:
                    return True
            t+=1
        return False
        
