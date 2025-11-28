class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        if not strs:
            return ""
        
        # Take the shortest string (prefix can't be longer than this)
        shortest = min(strs, key=len)
        
        for i, ch in enumerate(shortest):
            for s in strs:
                if s[i] != ch:
                    # mismatch at position i, prefix ends before i
                    return shortest[:i]
        
        # all characters of shortest matched
        return shortest
