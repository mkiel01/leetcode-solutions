class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:

        int_to_str = [str(i) for i in digits]

        digits = int("".join(int_to_str))
     
        digits = digits + 1

        res = [int(x) for x in str(digits)]
 
        return(res)