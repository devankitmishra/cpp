class Solution {
public:
    int minFlips(int a, int b, int c) {
        ios::sync_with_stdio(0);
        int numOfFlips = 0;
        while (a != 0 || b != 0 || c != 0) {
            if ((c & 1) == 0) {
                // We need both bits to be 0
                if ((a & 1) == 1) numOfFlips++;
                if ((b & 1) == 1) numOfFlips++;
            } else {
                // We need at least one of the bits to be 1
                if ((a & 1) == 0 && (b & 1) == 0) numOfFlips++;
            }
            a >>= 1;
            b >>= 1;
            c >>= 1;
        }
        return numOfFlips;
    }
};
