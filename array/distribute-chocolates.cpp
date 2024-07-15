// problem link:
// https://www.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1
class Solution {
public:
  long long findMinDiff(vector<long long> a, long long n, long long m) {
    // code
    sort(a.begin(), a.end());
    int mini = INT_MAX;
    for (int i = 0; i <= n - m; i++) {
      if (a[i + m - 1] - a[i] < mini) {
        mini = a[i + m - 1] - a[i];
      }
    }
    return mini;
  }
};
