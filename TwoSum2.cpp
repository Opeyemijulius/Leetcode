class Solution(object):
    def twoSum(self, nums, target):
        for i in range(len(nums)): # 3 elts 
            for j in range(len(nums)): # 3 elts
                if (i != j): # if its not the same elt
                    if nums[i] + nums[j] == target: # check if they add up to target
                        return i, j
        
