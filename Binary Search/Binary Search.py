class Solution:
    def search(self, nums: List[int], target: int) -> int:
        left = 0
        right = len(nums) - 1

        while left <= right:
            m = left + ((right - left) // 2)
            if nums[m] > target:
                right = m - 1 #artik orta sag taraftan baslayacak cozum solda!
            elif nums[m] < target:
                left = m + 1 #artik orta sol taraftan baslayacak cozum sagda!
            else:
                return m
        return -1