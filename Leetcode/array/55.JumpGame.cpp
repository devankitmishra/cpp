class Solution {
public:
    bool canJump(vector<int>& nums) {
        ios::sync_with_stdio(0);
        int maxReach = 0;  // Tracks the maximum index we can reach
        for (int i = 0; i < nums.size(); ++i) {
            if (i > maxReach) {
                // If the current index is greater than the maximum reachable index, we can't proceed
                return false;
            }
            maxReach = max(maxReach, i + nums[i]);  // Update the maximum reach
        }
        return true;
    }
};
