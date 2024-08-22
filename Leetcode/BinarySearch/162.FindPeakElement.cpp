class Solution {
public:
    int findPeakElement(vector<int>& nums) {

        ios::sync_with_stdio(0);
        // // Find the iterator to the maximum element
        // auto peak = max_element(nums.begin(), nums.end());
        
        // // Calculate the index of the maximum element
        // int peakIndex = distance(nums.begin(), peak);
        // return peakIndex;



        int left = 0;
        int right = nums.size() - 1;

        while (left < right) {
            int mid = left + (right - left) / 2;
            
            if (nums[mid] < nums[mid + 1]) {
                // The maximum is in the right half
                left = mid + 1;
            } else {
                // The maximum is in the left half including mid
                right = mid;
            }
        }

        return left;
    }
};