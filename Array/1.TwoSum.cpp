class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        for (int i = 0;i<nums.size();i++){
            if (mp[nums[i]]) {
                return {mp[nums[i]]-1, i};
            }
            // i add 1 here for special case when the pair in the first one like: {0, 5}, {0, 3} but if check 0 = false => ignore pass case so to avoid that
            mp[target - nums[i]] = i+1;
        }

        return {};
    }
};