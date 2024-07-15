// problem link: https://leetcode.com/problems/majority-element/
class Solution {
public:
  int majorityElement(vector<int> &nums) {

    int n = nums.size();
    int el = nums[0];
    int ctr{0};
    for (int i = 0; i < n; i++) {
      if (ctr == 0) {
        el = nums[i];
      }
      if (nums[i] == el) {
        ctr++;
      } else {
        ctr--;
      }
    }

    return el;
  }
};
