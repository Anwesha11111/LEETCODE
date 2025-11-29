class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
     for i in range(len(nums)-1) :
        for j in range(i+1,len(nums)-1):
         if nums[i] == nums[j]:
             nums.remove(nums[i])
     return len(nums)