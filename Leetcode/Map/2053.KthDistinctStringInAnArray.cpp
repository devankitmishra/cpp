class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        ios::sync_with_stdio(0);
        unordered_map<string, int> freq;

    // Count the frequency of each string in the array
    for (string str : arr) {
        freq[str]++;
    }

    // Iterate through the array to find the k-th distinct string
    int distinctCount = 0;
    for (string str : arr) {
        if (freq[str] == 1) {
            distinctCount++;
            if (distinctCount == k) {
                return str;
            }
        }
    }

    // If there are fewer than k distinct strings, return an empty string
    return "";
    }
};