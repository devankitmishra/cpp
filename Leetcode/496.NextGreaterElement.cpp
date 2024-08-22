class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        if (nums2.empty() || nums1.empty())
            return {};

        stack<int> helperStack;
        unordered_map<int, int> nextGreaterMap;

        for (int i = nums2.size() - 1; i >= 0; --i) {
            int element = nums2[i];

            // Remove all elements smaller than current element
            while (!helperStack.empty() && helperStack.top() <= element) {
                helperStack.pop();
            }

            // If stack is empty, no next greater element
            if (helperStack.empty()) {
                nextGreaterMap[element] = -1;
            } else {
                // Next greater element is the top of the stack
                nextGreaterMap[element] = helperStack.top();
            }

            // Push current element onto the stack
            helperStack.push(element);
        }

        vector<int> result(nums1.size());
        for (int i = 0; i < nums1.size(); ++i) {
            result[i] = nextGreaterMap[nums1[i]];
        }

        return result;
    }
};