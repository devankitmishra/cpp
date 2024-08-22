class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n, -1); // Initialize result with -1
        stack<int> helperStack; // Stack to store indices

        // Traverse the array twice to simulate circular behavior
        for (int i = 2 * n - 1; i >= 0; i--) {
            int index = i % n;
            int element = nums[index];

            // Pop elements that are less than or equal to the current element
            while (!helperStack.empty() && nums[helperStack.top()] <= element) {
                helperStack.pop();
            }

            // If stack is not empty, the top element is the next greater element
            if (!helperStack.empty()) {
                result[index] = nums[helperStack.top()];
            }

            // Push the current index onto the stack
            helperStack.push(index);
        }

        return result;
    }
};