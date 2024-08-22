class Solution {

    bool haveSameCharacters(const string& str1, const string& str2) {
        set<char> set1(str1.begin(), str1.end());
        set<char> set2(str2.begin(), str2.end());
        return set1 == set2;
    }

    vector<int> getCharacterCounts(const string& str) {
        vector<int> charCount(256, 0);
        for (char c : str) {
            charCount[c]++;
        }
        return charCount;
    }

public:

    bool closeStrings(string word1, string word2) {
        ios::sync_with_stdio(0);
        if(word1.size() != word2.size()){
            return false;
        }
        if (haveSameCharacters(word1,word2)) {
            vector<int> counts1 = getCharacterCounts(word1);
            sort(counts1.begin(),counts1.end());
            vector<int> counts2 = getCharacterCounts(word2);
            sort(counts2.begin(),counts2.end());
            return counts1==counts2;
        } else {
            return false;
        }
    }
};