class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> altitudes;
        int sum = 0;
        altitudes.push_back(sum); // Include the initial altitude
        for(int g : gain){
            sum += g;
            altitudes.push_back(sum);
        }
        int ans = *max_element(altitudes.begin(), altitudes.end());
        return ans;
    }
};