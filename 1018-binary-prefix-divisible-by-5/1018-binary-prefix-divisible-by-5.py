class Solution:
    def prefixesDivBy5(self, nums: List[int]) -> List[bool]:
        sum = 0
        result = []
        for num in nums:
            sum = (sum * 2 + num) % 5
            result.append(sum == 0)
        return result
