#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    string multiply(string num1, string num2) {
        if (num1 == "0" || num2 == "0") {
            return "0";
        }

        int n = num1.size();
        int m = num2.size();
        vector<int> result(n + m, 0);

        // Reverse the strings to make it easier to handle from least significant digit
        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());

        // Multiply each digit and add the result to the corresponding position in the result vector
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                int mul = (num1[i] - '0') * (num2[j] - '0');
                result[i + j] += mul;
                result[i + j + 1] += result[i + j] / 10; // Carry over
                result[i + j] %= 10;
            }
        }

        // Convert the result vector back to a string
        string product;
        for (int i = result.size() - 1; i >= 0; --i) {
            if (product.empty() && result[i] == 0) continue;  // Skip leading zeros
            product.push_back(result[i] + '0');
        }

        return product;
    }
};

int main() {
    Solution solution;
    string num1 = "123";
    string num2 = "456";
    cout << "Product: " << solution.multiply(num1, num2) << endl;  // Output: "56088"
    return 0;
}


/*Let's take the example 2 where `num1 = "123"` and `num2 = "456"` to explain how the code works step-by-step.

### Step-by-Step Explanation:

1. **Initial Setup**:
   - Input strings: `num1 = "123"`, `num2 = "456"`
   - Check if either string is "0". If so, return "0". In this case, neither is "0".

2. **Reverse the Strings**:
   - Reverse `num1`: `321`
   - Reverse `num2`: `654`

3. **Initialize Result Vector**:
   - Create a result vector of size `n + m = 3 + 3 = 6`: `result = [0, 0, 0, 0, 0, 0]`

4. **Multiply Each Digit**:
   - We will multiply each digit of `num1` with each digit of `num2` and
    store the intermediate results in the result vector.

   **First Iteration (i = 0)**:
   - `num1[0] = '3'` (digit 3)
     - Multiply with `num2[0] = '6'` (digit 6):
       - `3 * 6 = 18`
       - `result[0] += 18` → `result = [18, 0, 0, 0, 0, 0]`
       - Handle carry: `result[1] += 18 / 10 = 1`, `result[0] %= 10 = 8` → `result = [8, 1, 0, 0, 0, 0]`

     - Multiply with `num2[1] = '5'` (digit 5):
       - `3 * 5 = 15`
       - `result[1] += 15` → `result = [8, 16, 0, 0, 0, 0]`
       - Handle carry: `result[2] += 16 / 10 = 1`, `result[1] %= 10 = 6` → `result = [8, 6, 1, 0, 0, 0]`

     - Multiply with `num2[2] = '4'` (digit 4):
       - `3 * 4 = 12`
       - `result[2] += 12` → `result = [8, 6, 13, 0, 0, 0]`
       - Handle carry: `result[3] += 13 / 10 = 1`, `result[2] %= 10 = 3` → `result = [8, 6, 3, 1, 0, 0]`

   **Second Iteration (i = 1)**:
   - `num1[1] = '2'` (digit 2)
     - Multiply with `num2[0] = '6'` (digit 6):
       - `2 * 6 = 12`
       - `result[1] += 12` → `result = [8, 18, 3, 1, 0, 0]`
       - Handle carry: `result[2] += 18 / 10 = 1`, `result[1] %= 10 = 8` → `result = [8, 8, 4, 1, 0, 0]`

     - Multiply with `num2[1] = '5'` (digit 5):
       - `2 * 5 = 10`
       - `result[2] += 10` → `result = [8, 8, 14, 1, 0, 0]`
       - Handle carry: `result[3] += 14 / 10 = 1`, `result[2] %= 10 = 4` → `result = [8, 8, 4, 2, 0, 0]`

     - Multiply with `num2[2] = '4'` (digit 4):
       - `2 * 4 = 8`
       - `result[3] += 8` → `result = [8, 8, 4, 10, 0, 0]`
       - Handle carry: `result[4] += 10 / 10 = 1`, `result[3] %= 10 = 0` → `result = [8, 8, 4, 0, 1, 0]`

   **Third Iteration (i = 2)**:
   - `num1[2] = '1'` (digit 1)
     - Multiply with `num2[0] = '6'` (digit 6):
       - `1 * 6 = 6`
       - `result[2] += 6` → `result = [8, 8, 10, 0, 1, 0]`
       - Handle carry: `result[3] += 10 / 10 = 1`, `result[2] %= 10 = 0` → `result = [8, 8, 0, 1, 1, 0]`

     - Multiply with `num2[1] = '5'` (digit 5):
       - `1 * 5 = 5`
       - `result[3] += 5` → `result = [8, 8, 0, 6, 1, 0]`

     - Multiply with `num2[2] = '4'` (digit 4):
       - `1 * 4 = 4`
       - `result[4] += 4` → `result = [8, 8, 0, 6, 5, 0]`

5. **Convert Result Vector to String**:
   - Starting from the most significant digit, convert the result vector to a string.
   - Skip leading zeros.
   - Result vector: `[8, 8, 0, 6, 5, 0]` (after skipping leading zeros)
   - Final product string: "56088"

### Conclusion:
The final product of the strings "123" and "456" is "56088", which matches our expectations.
The code correctly implements the manual multiplication process digit by digit and handles the
carries appropriately to produce the correct result.*/