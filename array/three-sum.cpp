// problem link: https://leetcode.com/problems/3sum/description/
//
//

class Solution {
public:
  vector<vector<int>> threeSum(vector<int> &nums) {
    // vector<vector<int>> ans;
    // int n = nums.size();
    // sort(nums.begin(), nums.end());
    //
    // for (int i = 0; i < n; i++) {
    //    if (nums[i] > 0 && nums[i] == nums[i] - 1)
    //        continue;
    //    int j = i + 1;
    //    int k = n - 1;
    //
    //    while (j < k) {
    //        int sum = nums[i] + nums[j] + nums[k];
    //        if (sum < 0) {
    //            j++;
    //        } else if (sum > 0) {
    //            k--;
    //        } else {
    //            ans.push_back({nums[i], nums[j], nums[k]});
    //            j++;
    //            k--;
    //            while (j < k && nums[j] == nums[j - 1])
    //                j++;
    //            while (j < k && nums[k] == nums[k + 1])
    //                k--;
    //        }
    //    }
    //}
    // return ans;
    int n = nums.size();
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n; i++) {
      // remove duplicates:
      if (i != 0 && nums[i] == nums[i - 1])
        continue;

      // moving 2 pointers:
      int j = i + 1;
      int k = n - 1;
      while (j < k) {
        int sum = nums[i] + nums[j] + nums[k];
        if (sum < 0) {
          j++;
        } else if (sum > 0) {
          k--;
        } else {
          vector<int> temp = {nums[i], nums[j], nums[k]};
          ans.push_back(temp);
          j++;
          k--;
          // skip the duplicates:
          while (j < k && nums[j] == nums[j - 1])
            j++;
          while (j < k && nums[k] == nums[k + 1])
            k--;
        }
      }
    }
    return ans;
  }
};
