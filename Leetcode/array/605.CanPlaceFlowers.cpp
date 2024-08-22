class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        ios::sync_with_stdio(0);
        int sum = 0;
        int size = flowerbed.size();
        
        for (int i = 0; i < size && sum < n; i++) {
            if (flowerbed[i] == 0) {
                // Check if the previous plot is empty or it's the first plot
                if ((i == 0 || flowerbed[i - 1] == 0) && 
                    // Check if the next plot is empty or it's the last plot
                    (i == size - 1 || flowerbed[i + 1] == 0)) {
                    flowerbed[i] = 1;
                    sum++;
                }
            }
        }
        
        return sum >= n;
    }
};