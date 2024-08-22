#include <vector>
#include <algorithm> // for std::max
using namespace std;

class Solution
{
public:
    int rob(vector<int> &nums)
    {

        int n = nums.size();

        if (n == 1)
        {
            return nums[0];
        }
        if (n == 2)
        {
            return max(nums[0], nums[1]);
        }

        // Create a vector to store the maximum loot at each index
        vector<int> total_loot(n);

        // Initialize the maximum loot for the first two houses
        total_loot[0] = nums[0];
        total_loot[1] = max(nums[0], nums[1]);

        // Fill the total_loot array with the maximum possible loot at each house
        for (int i = 2; i < n; ++i)
        {
            total_loot[i] = max(total_loot[i - 2] + nums[i], total_loot[i - 1]);
        }

        // Return the maximum loot possible up to the last house
        return total_loot[nums.size() - 1];
    }
};
