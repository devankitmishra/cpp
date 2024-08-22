/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */


class Solution {
public:
    int guessNumber(int n) {
        ios::sync_with_stdio(0);
        int low = 1, high = n;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            int pick = guess(mid);
            
            if (pick == 0) {
                return mid;
                break;  // Found the number
            } else if (pick == -1) {
                high = mid - 1;  // Number is lower
            } else {
                low = mid + 1;  // Number is higher
            }
        }
        return -1;  // In case no solution is found
    }
};
