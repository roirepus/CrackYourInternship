class Solution {
public:
  void merge(vector<int> &nums1, int m, vector<int> &nums2, int n) {
    for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
        if (nums1[i] > nums2[j]) {
          swap(nums1[i], nums2[j]);
        }
      }
    }
    sort(nums2.begin(), nums2.end());
    for (int i = m; i < m + n; i++) {
      nums1[i] = nums2[i - m];
    }
  }
};
