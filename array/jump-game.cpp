// problem link: https://leetcode.com/problems/jump-game/description/

class Solution {
public:
  bool canJump(vector<int> &nums) {
    int far = nums[0];

    for (int i = 0; i < nums.size(); i++) {
      if (far >= nums.size() - 1)
        return true;

      if (nums[i] == 0 && far == i)
        return false;

      if (i + nums[i] > far)
        far = i + nums[i];
    }

    return true;
  }
};
