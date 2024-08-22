#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        // Edge case: if numRows is 1 or greater than or equal to the length of the string
        if (numRows <= 1 || numRows >= s.size()) {
            return s;
        }

        // Create a vector of strings to hold the rows
        vector<string> rows(numRows);

        int currentRow = 0;  // The current row we are placing the character in
        bool goingDown = false;  // Direction flag

        // Iterate over each character in the string
        for (char c : s) {
            rows[currentRow] += c;  // Place the character in the current row

            // Change direction when we reach the top or bottom row
            if (currentRow == 0 || currentRow == numRows - 1) {
                goingDown = !goingDown;
            }

            // Move to the next row depending on the direction
            currentRow += goingDown ? 1 : -1;
        }

        // Concatenate all rows to form the final string
        string result;
        for (const string& row : rows) {
            result += row;
        }

        return result;
    }
};

// Test the function
int main() {
    Solution solution;
    string s = "PAYPALISHIRING";
    int numRows = 3;
    string result = solution.convert(s, numRows);

    cout << "Converted string: " << result << endl;

    return 0;
}
