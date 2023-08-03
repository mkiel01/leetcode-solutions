class Solution:
    def isPalindrome(self, x: int) -> bool:
        x = str(x)
        def Palindrome(x):
            out = 0
            out = str(out)
            
            for i in range(0,len(x)):

                x[i]
                out = out + x[i]
            
            return out[1:]

        def Palindromexxx(x):
            out = 0
            out = str(out)

            for i in reversed(range(0,len(x))):

                x[i]
                out = out + x[i]
            return out[1:]

        def result():

            if Palindrome(x) == Palindromexxx(x):
                return True 
            else:
                return False
        
        return result()

