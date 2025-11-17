class Solution:
    def canBeTypedWords(self, text: str, brokenLetters: str) -> int:
        broken_set = set(brokenLetters)  # Convert to set for fast lookup
        words = text.split()
        count = 0

        for word in words:
            # Check if any broken letter is in the current word
            if any(ch in broken_set for ch in word):
                continue  # Skip this word as it contains broken letter
            count += 1  # Count words without any broken letters
        
        return count
   
