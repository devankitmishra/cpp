class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        ios_base::sync_with_stdio(false);
        for(int num : nums2){
            nums1.push_back(num);
        }
        
        sort(nums1.begin(),nums1.end());

        int n = nums1.size();
        int midIdx = n / 2;

        if (n % 2 == 0) {
            double ans = (nums1[midIdx - 1] + nums1[midIdx]) / 2.0;
            return ans;
        } else {
            double ans = nums1[midIdx];
            return ans;
        }
    }
};