
class Solution {
public:
    int climbStairs(int n) {
        if (n >= 1 && n <= 3) {
            return n;
        }
        int f = 2;
        int s = 3;
        int t = 0;

        for (int i = 3; i < n; i++) {
            t = f + s;
            f = s;
            s = t;
        }

        return s;
    }
};