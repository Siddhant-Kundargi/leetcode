class Solution(object):
    def findDifference(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[List[int]]
        """

        s1 = set(nums1)
        s2 = set(nums2)

        return [s1.difference(s2), s2.difference(s1)]