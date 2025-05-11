class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        dic = {}
        for idx in range(len(nums)):
            if nums[idx] in dic:
                return [dic[nums[idx]], idx]
            dic[target-nums[idx]] = idx
        return [0, 1]

        # if target - nums is in the dic this mean some values can adding to sum and return the result