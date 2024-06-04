class Solution(object):
    def longestPalindrome(self, s):
        d = {}
        for i in s:
            if i not in d:
                d[i]=1
            else:
                d[i]+=1
        l = 0
        unique = 0
        for i in d.keys():
            if d[i]%2==0:
                l+=d[i]
            else:
                l+=d[i]-1
                unique=1
        return unique+l
        