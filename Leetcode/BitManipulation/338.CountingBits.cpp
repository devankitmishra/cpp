class Solution {
    
    int countOneBits(int n) {
        int count = 0;
        while (n) {
            count += n & 1;
            n >>= 1;
        }
            return count;
    }
public:
    vector<int> countBits(int n) {
        ios::sync_with_stdio(0);
        vector<int> ans(n + 1);
        for (int i = 0; i <= n; i++) {
            ans[i] = countOneBits(i);
        }
        return ans;   
    }
};