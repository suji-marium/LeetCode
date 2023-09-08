"""
A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.

"""

class Solution:
    def isPalindrome(self, s: str) -> bool:
        flag=0
        
        lw=[c.lower() for c in s if c.isalnum()]
        
        l=len(lw)
        
        for i in range (l):
            if(lw[i]!=lw[l-i-1]):
                flag=1;
        if(flag==0):
            return(True)
        else:
            return(False)

        
