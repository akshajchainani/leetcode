class Solution {
 public:
  int minSubArrayLen(int t, vector<int>& a) {
    int min = INT_MAX;
    int cs = 0;

    for (int i = 0, j = 0; j < a.size(); ++j) {
      cs += a[j];
      while (cs >= t) {
        min = std::min(min, j - i + 1);
        cs -= a[i];
        ++i;
      }
    }

    return min == INT_MAX ? 0 : min;
  }
};
