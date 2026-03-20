class Solution:
    def lengthOfLastWord(self, s: str) -> int:
       g=[]
       g=s.split(' ')
       for gan in g:
        if gan==' ':
            gan.split(' ')
       l=len(g)
       if g[l-1]!=' ':
         return len(g[l-1])
       else:
         return len(g[l-2]) 


            


            