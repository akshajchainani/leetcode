#include <cmath> // For log2

class Solution {
 public:
  int bitwiseComplement(int n) {
    if (n == 0) return 1;
    int x = log2(n) + 1;
    int mask = (1 << x) - 1;
    return mask ^ n;
  }
};