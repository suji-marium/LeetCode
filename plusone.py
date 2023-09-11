"""
You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.
Increment the large integer by one and return the resulting array of digits.
"""
class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        r_digits=[]
        val=""
        for x in digits:
            val+=str(x) 
        res=int(val)+1
        v_res=str(res)

        for x in v_res:
            r_digits.append(int(x))
        return(r_digits)
