class Solution {
public:
    int majorityElement(vector<int>& arr) {
        ios_base::sync_with_stdio(false);
        // if (arr.empty()) return -1; 
        // sort(arr.begin(), arr.end());

        // int maxFreq = 1, currentFreq = 1;
        // int maxFreqElement = arr[0];

        // for (size_t i = 1; i < arr.size(); i++) {
        //     if (arr[i] == arr[i - 1]) {
        //         currentFreq++;
        //     } else {
        //         currentFreq = 1;
        //     }

        //     if (currentFreq > maxFreq) {
        //         maxFreq = currentFreq;
        //         maxFreqElement = arr[i];
        //     }
        // }

        // return maxFreqElement;

        int candidate = arr[0];
        int count = 1;
        for (int i = 1; i < arr.size(); ++i) {
            if (count == 0) {
                candidate = arr[i];
                count = 1;
            } else if (arr[i] == candidate) {
                count++;
            } else {
                count--;
            }
        }
        return candidate;
    }
};