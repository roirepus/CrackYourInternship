// problem link:
// https://leetcode.com/problems/find-the-duplicate-number/description/
//

class Solution {
public:
  int findDuplicate(vector<int> &nums) {
    int n = nums.size();
    set<int> s;
    for (int i = 0; i < n; i++) {
      if (s.count(nums[i])) {
        return nums[i];
      } else {
        s.insert(nums[i]);
      }
    }
    return 0;
  }
};
