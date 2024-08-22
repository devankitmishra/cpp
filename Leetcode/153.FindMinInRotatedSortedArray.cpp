#include <vector>
#include <algorithm> 
#include<iostream>

using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
    //    sort(nums.begin(), nums.end());
    //    return nums[0];
    int left = 0, right = nums.size() - 1;

        while(left < right) {
            int mid = left + (right - left) / 2;
            if(nums[mid] < nums[right]) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }

        return nums[left];
    
    }
};