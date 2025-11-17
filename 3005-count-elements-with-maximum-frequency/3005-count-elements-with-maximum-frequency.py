from typing import List

class Solution:
    def maxFrequencyElements(self, nums: List[int]) -> int:
        def counti(nums: List[int], num: int) -> int:
            max_count = 0
            for x in nums:  # iterating over elements, not indices
                if x == num:  # check equality with num, not if num in nums repeatedly
                    max_count += 1
            return max_count

        max_ = [counti(nums, item) for item in nums]
        max_count = max(max_) if max_ else 0
        count = 0
        for c in max_:
            if c == max_count:
                count += 1
        return count

      


  