class Solution {
public:
  int maxProfit(vector<int> &prices) {

    int n = prices.size();
    //  int mini=0;
    //  for(int i=0;i<n-1;i++){
    //      for(int j=i+1;j<n;j++){
    //
    //          mini=max(mini,nums[j]-nums[i]);
    //          if(mini<0){mini=0;}
    //
    //      }
    //  }
    //  return mini;

    int less = prices[0];
    int profit = 0;
    for (int i = 1; i < n; i++) {
      if (prices[i] < less) {
        less = prices[i];
      } else {
        profit = max(profit, prices[i] - less);
      }
    }

    return profit;
  }
};
