"""
Using Python for this problem because in-order removal is more intuitive
Problem is essentially asking to remove all occurrences of val and return new size of array
"""
class Solution(object):
    def removeElement(self, nums, val):
        """
        :type nums: List[int]
        :type val: int
        :rtype: int
        """
        for i in range(nums.count(val)):
            nums.remove(val)
        return len(nums)