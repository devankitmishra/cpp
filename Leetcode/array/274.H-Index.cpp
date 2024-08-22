class Solution {
public:
    int hIndex(vector<int>& citations) {
        int tp = citations.size();
        sort(citations.begin(), citations.end());
        while (tp > 0) {
            if (citations[citations.size() - tp] >= tp) {
                return tp;
            }
            tp--;
        }
        return 0;
    }
};