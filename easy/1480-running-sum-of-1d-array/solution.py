class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        
        last_num = len(nums) - 1
        enumerated_list = enumerate(nums)
        result = []
        
        for i, num in enumerated_list:
            if i == 0:
                result.append(nums[i])
            else:
                result.append(result[-1] + nums[i])
            
            if i == last_num:
                return result
        
            