class Solution:
    def twoSum(self, nums, target):
        num_map = {}
        
        for i, num in enumerate(nums):
            complement = target - num
            if complement in num_map:
                return [num_map[complement], i]
            num_map[num] = i
        
        return []

def _driver():
    param_1 = [3,2,4]
    param_2 = 6
    ret = Solution().twoSum(param_1, param_2)
    print(ret)

_driver()
