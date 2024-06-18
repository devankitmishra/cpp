#include <vector>
#include <algorithm> // for std::max
using namespace std;


class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        double leftProduct = 1;
        double rightProduct = 1;
        int ans = INT_MIN;

        for (int i = 0; i < n; ++i) {
            // if any of leftProduct or rightProduct becomes 0 then update it to 1
            leftProduct = (leftProduct == 0) ? 1 : leftProduct;
            rightProduct = (rightProduct == 0) ? 1 : rightProduct;

            // prefix product
            leftProduct *= nums[i];

            // suffix product
            rightProduct *= nums[n - 1 - i];

            double temp = leftProduct;
            if(leftProduct < rightProduct) temp = rightProduct;
            if(ans < temp) ans = temp;
        }

        return ans;
    }
};
