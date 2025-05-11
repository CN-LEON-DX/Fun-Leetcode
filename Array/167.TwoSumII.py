class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        l, r = 0, len(numbers) - 1
        s = numbers[l] + numbers[r]
        while (s != target and l < r):
            if s > target:
                s -= numbers[r] - numbers[r-1]
                r -= 1
            else:
                s += numbers[l+1] - numbers[l]
                l +=1
        return [l+1, r+1]

        