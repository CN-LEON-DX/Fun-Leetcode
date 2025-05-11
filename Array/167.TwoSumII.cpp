class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // common problem: using two pointer
        int left = 0, right = numbers.size() - 1;
        int s = numbers[left] + numbers[right];
        while (s != target && left < right){
            if (s > target){
                s -= numbers[right] - numbers[right-1];
                right--;
            }else {
                s += numbers[left+1] - numbers[left];
                left++;
            }
        }
        // for answer
        return {left+1, right+1};
    }
};