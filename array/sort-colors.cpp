// problem link: https://leetcode.com/problems/sort-colors/description/
//
//
//
//
class Solution {
public:
  void sortColors(vector<int> &nums) {
    int ptr = 0;
    int left = 0;
    int right = nums.size() - 1;
    while (left <= right) {
      if (nums[left] == 0) {
        swap(nums[ptr++], nums[left]);
        left = max(left, ptr);
      } else if (nums[left] == 1)
        left++;
      else
        swap(nums[right--], nums[left]);
    }
  }
};
