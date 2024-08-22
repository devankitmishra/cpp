class Solution {
public:
    int getSum(int a, int b) {
        ios::sync_with_stdio(0);
        while (b != 0) {
            int carry = (a & b) << 1; // Carry calculation
            a = a ^ b;                // Sum calculation without carry
            b = carry;                // Assign carry to b for next iteration
        }
        return a; // Final result is stored in a
    }
};
