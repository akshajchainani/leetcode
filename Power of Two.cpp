class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0) return false; 
        
        for (int i = 0; i <= 30; i++) {
            int ans = 1 << i; 
            if (ans == n) {
                return true;
            }
        }
        return false; 
    }
};