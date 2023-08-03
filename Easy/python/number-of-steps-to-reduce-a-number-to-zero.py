class Solution:
    def numberOfSteps(self, num: int) -> int:
        i=0
        while num > 0:

            if num % 2 == 0:
     
                num = num/2 
                i = i + 1

            else:
                num = num-1
                num= num/2
                i = i + 2
        
        if i !=0:
            return i-1
        else:
            return i
