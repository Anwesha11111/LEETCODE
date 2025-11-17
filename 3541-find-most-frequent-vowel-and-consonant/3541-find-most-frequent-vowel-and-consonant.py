class Solution:
    def maxFreqSum(self, s: str) -> int:
        vowels = "aeiou"
        vowel_count = {}
        consonant_count = {}

        for ch in s:
            ch = ch.lower()
            if ch.isalpha():
                if ch in vowels:
                    vowel_count[ch] = vowel_count.get(ch, 0) + 1
                else:
                    consonant_count[ch] = consonant_count.get(ch, 0) + 1

        max_vowel_count = max(vowel_count.values()) if vowel_count else 0
        max_consonant_count = max(consonant_count.values()) if consonant_count else 0

        return max_vowel_count + max_consonant_count
