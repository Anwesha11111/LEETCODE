class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        m=len(needle)
        n=len(haystack)
        if m==0:
            return 0
        shift={ch:m for ch in set(haystack)}
        for i in range(m-1):
            shift[needle[i]]=len(needle)-i-1
        i=0
        while(i<=n-m):
                k=m-1
                while k>=0 and (needle[k]==haystack[i+k]) :
                    k-=1    
                if(k<0):
                        return i
                i+=shift.get(haystack[i+m-1],m)
        return -1

