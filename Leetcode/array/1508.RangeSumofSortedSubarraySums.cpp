class Solution {
    void subarray(vector<int>& nums, vector<long long>& sums) {
        long long sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            sums.push_back(sum);
        }
    }
public:
    long long rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<long long> sums;
        long long ans = 0;
        vector<int> temp = nums; // Use a temporary vector to keep the original nums unchanged

        // Generate all subarray sums
        while (temp.size() > 0) {
            subarray(temp, sums);
            temp.erase(temp.begin());
        }

        // Sort the subarray sums
        sort(sums.begin(), sums.end());

        // Adjust the index range to correctly access elements from left to right
        for (int i = left - 1; i < right; i++) {
            ans += sums[i];
        }
        
        // To avoid potential overflow, use modulo operation with 10^9+7
        const long long MOD = 1000000007;
        return ans % MOD;
        /*
        Why ? 
            Prime Number: 
            (1000000007) is a prime number often used in 
            programming contests and mathematical problems. 
            Using a prime number for the modulo operation helps in 
            various mathematical proofs and ensures that 
            operations such as modular inverses are straightforward.

            Large but Manageable: 
            it is large enough to handle most cases in competitive programming, 
            yet still small enough to fit within a 32-bit or 64-bit integer 
            type in modern programming languages.
        */
    }
};