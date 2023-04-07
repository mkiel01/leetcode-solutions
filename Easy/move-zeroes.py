class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        counter = 0


        for i in nums:
            if i == 0:
                counter += 1

        while counter > 0:
    

            nums.remove(0)
            counter -= 1
            nums.append(0)
        return nums
        