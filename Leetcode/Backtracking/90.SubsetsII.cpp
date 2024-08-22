class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        ios::sync_with_stdio(false);
        vector<vector<int>> resultList;
        sort(nums.begin(), nums.end());

        backtrack(resultList, vector<int>(), nums, 0);
        return resultList;
    }

private:
    void backtrack(vector<vector<int>>& resultSets, vector<int> tempSet, vector<int>& nums, int start) {
        // Add the current subset to the result
        resultSets.push_back(tempSet);

        for (int i = start; i < nums.size(); i++) {

            // Skip duplicates
            if (i > start && nums[i] == nums[i - 1])
                continue;

            // Include the current number
            tempSet.push_back(nums[i]);

            // Backtrack with the next subset
            backtrack(resultSets, tempSet, nums, i + 1);

            // Remove the last included number (backtrack)
            tempSet.pop_back();
        }
    }
};