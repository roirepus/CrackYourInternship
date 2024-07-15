class Solution {
public:
  vector<int> twoSum(vector<int> &nums, int target) {

    int n = nums.size();
    map<int, int> m;
    for (int i = 0; i < n; i++) {
      if (m.count(target - nums[i])) {

        return {i, m[target - nums[i]]};
      } else {
        m[nums[i]] = i;
      }
    }
    return {0, 0};
  }
};
