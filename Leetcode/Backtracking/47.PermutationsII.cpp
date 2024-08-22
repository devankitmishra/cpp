// Using STL
class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        ans.push_back(nums);
        while(next_permutation(nums.begin(),nums.end())) //stl next_permutation
        {
            ans.push_back(nums);
        }
        return ans;
    }
};

//Using Backtracking
class Permutations {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> resultList;
        vector<int> tempList;
        backtrack(resultList, tempList, nums);
        return resultList;
    }

private:
    void backtrack(vector<vector<int>>& resultList, vector<int>& tempList, vector<int>& nums) {
        // If we match the length, it is a permutation
        if (tempList.size() == nums.size()) {
            resultList.push_back(tempList);
            return;
        }

        for (int number : nums) {
            // Skip if we get the same element
            if (find(tempList.begin(), tempList.end(), number) != tempList.end())
                continue;

            // Add the new element
            tempList.push_back(number);

            // Go back to try other elements
            backtrack(resultList, tempList, nums);

            // Remove the element
            tempList.pop_back();
        }
    }
};
