class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int ans = 0;
        int diff = INT_MAX;
        int tmp = INT_MAX;
        for (int i = 0;i<n-2;i++){
            int l = i + 1;
            int r = n - 1;
            while (l < r){
                tmp = nums[i] + nums[l] + nums[r]  - target;
                if (diff > abs(tmp)){
                    diff = abs(tmp);
                    ans = nums[i] + nums[l] + nums[r];
                }

                if (tmp > 0){
                    r--;
                }else if (tmp < 0){
                    l++;
                }else{
                    return target;
                }
            }

        }
            return ans;

    }
};