class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        ios::sync_with_stdio(0);
        int minVal = arrays[0].front();
        int maxVal = arrays[0].back();
        int maxDistance = 0;

        for(int i = 1; i < arrays.size(); i++) {
            // Calculate distance using current min and max with other arrays
            maxDistance = max(maxDistance, max(abs(arrays[i].back() - minVal), abs(maxVal - arrays[i].front())));

            // Update the global min and max values
            minVal = min(minVal, arrays[i].front());
            maxVal = max(maxVal, arrays[i].back());
        }

        return maxDistance;
    }
};