class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        ios::sync_with_stdio(0);
        vector<bool> ans;
    int maxCandy = *max_element(candies.begin(), candies.end());
    for (int candie : candies) {
        if ((candie + extraCandies) >= maxCandy) {
            ans.push_back(true);
        } else {
            ans.push_back(false);
        }
    }
    return ans;
    }
};