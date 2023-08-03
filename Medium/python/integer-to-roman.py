class Solution:
    def intToRoman(self, num: int) -> str:
        int_to_roman = { 1 : "I", 4 : "IV", 5 : "V", 9 : "IX", 10 : "X",
                40 : "XL", 50 : "L", 90 : "XC", 100 : "C", 400 : "CD", 500 : "D", 900 : "CM", 1000 : "M" }
               
        list = [1,4,5,9,10,40,50,90,100,400,500,900,100]

        res = ''
        x = 0

        while num >= 0:
            if num >= 1:
                for i in range(len(list)-1):
                    if list[i] <= num and list[i+1] > num:
                        x = list[i]
                    else: 
                        if num >= 900 and num <= 999:
                            x = 900
                        elif num >= 1000:
                            x = 1000
            else:
                break        
            num = num - x
            res += int_to_roman[x]
            print(num) 
        return res
        