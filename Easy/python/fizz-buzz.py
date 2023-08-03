class Solution:
    def fizzBuzz(self, n: int) -> List[str]:
        list=[]
        for n in range(1, n+1):
    
            if n % 3 == 0 and  n % 5 == 0:
                n="FizzBuzz"
            elif n % 3 == 0:
                n="Fizz"
            elif n % 5 == 0:
                n="Buzz"
            
            list.append(str(n))
        return list
    
        
