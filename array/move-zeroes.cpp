// problem link: https://leetcode.com/problems/move-zeroes/

class Solution {
public:
  void moveZeroes(vector<int> &nums) {

    int n = nums.size();
    int a{0};
    int b{0};
    int i = 0;
    while (b < n) {
      if (nums[b] == 0) {
        b++;
      } else {
        swap(nums[a], nums[b]);
        a++;
        b++;
      }
    }
  }
};
