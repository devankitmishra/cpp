class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
        ios::sync_with_stdio(0);
        if (s.size() != t.size()) {
            return false;
        }
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        return s == t;
    }
};
