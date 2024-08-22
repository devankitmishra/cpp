class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(false);
        int ans = 0;
        sort(nums.begin(), nums.end());
        int l = 0;
        int r = nums.size() - 1;
        
        while (l < r) {
            if (nums[l] + nums[r] == k) {
                ans++;
                l++;
                r--;
            } 
            else if (nums[l] + nums[r] > k)r--;
            else l++;
        }
        
        return ans;
    }
};