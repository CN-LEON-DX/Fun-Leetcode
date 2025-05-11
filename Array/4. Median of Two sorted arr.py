class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        # merge first
        mg = []
        n1 = len(nums1)
        n2 = len(nums2)
        l1, l2 = 0, 0
        while (l1 < n1 and l2 < n2):
            if nums1[l1] < nums2[l2]:
                mg.append(nums1[l1])
                l1+=1
            else:
                mg.append(nums2[l2])
                l2+=1
        while (l1 < n1):
            mg.append(nums1[l1])
            l1+=1
        while (l2 < n2):
            mg.append(nums2[l2])
            l2+=1

        mid = int((n1 + n2)/2)
        return float(mg[mid]) if (n1 + n2)%2 == 1 else float(mg[mid] + mg[mid-1])/2