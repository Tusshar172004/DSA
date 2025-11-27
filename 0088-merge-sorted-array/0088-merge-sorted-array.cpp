class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;         // Last element in nums1
        int j = n - 1;         // Last element in nums2
        int k = m + n - 1;     // Last index in nums1 (total size)

        // Merge from the end
        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k] = nums1[i];
                i--;
            } else {
                nums1[k] = nums2[j];
                j--;
            }
            k--;
        }

        // If any elements remain in nums2
        while (j >= 0) {
            nums1[k] = nums2[j];
            j--;
            k--;
        }
        // No need to copy nums1 remaining items, they're already in place
    }
};

