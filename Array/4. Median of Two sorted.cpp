
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> mg;
        int n1 = nums1.size();
        int n2 = nums2.size();
        int l1 = 0, l2 = 0;
        while (l1 < n1 && l2 < n2) {
            if (nums1[l1] < nums2[l2]) {
                mg.push_back(nums1[l1]);
                l1++;
            } else {
                mg.push_back(nums2[l2]);
                l2++;
            }
        }
        while (l1 < n1) {
            mg.push_back(nums1[l1]);
            l1++;
        }
        while (l2 < n2) {
            mg.push_back(nums2[l2]);
            l2++;
        }
        int mid = (n1+n2) / 2;

        if ((n1+n2) % 2 == 1) {
            return static_cast<double>(mg[mid]);
        } else {
            return static_cast<double>(mg[mid]+ mg[mid - 1]) / 2.0;
        }
    }
};