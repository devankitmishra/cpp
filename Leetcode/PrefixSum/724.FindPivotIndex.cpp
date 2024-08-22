class Solution {
public:
    int pivotIndex(vector<int>& nums) {

        ios::sync_with_stdio(0);
        int leftSum = 0;
        int totalSum = accumulate(nums.begin(), nums.end(), 0);

        for (int i = 0; i < nums.size(); i++) {
            if (leftSum == totalSum - leftSum - nums[i]) {
                return i;
            }
            leftSum += nums[i];
        }
        return -1;
    }
};