class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        ios::sync_with_stdio(0);
        vector<string> result;
        int n = words.size();
        int i = 0;

        while (i < n) {
            int lineLength = words[i].length();
            int j = i + 1;

            while (j < n && lineLength + words[j].length() + (j - i) <= maxWidth) {
                lineLength += words[j].length();
                j++;
            }

            int spacesNeeded = maxWidth - lineLength;
            int numberOfWords = j - i;

            string line = words[i];

            if (j == n || numberOfWords == 1) {
                for (int k = i + 1; k < j; k++) {
                    line += " " + words[k];
                }
                line += string(maxWidth - line.length(), ' '); 
            } else {
                int spaceBetweenWords = spacesNeeded / (numberOfWords - 1);
                int extraSpaces = spacesNeeded % (numberOfWords - 1);

                for (int k = i + 1; k < j; k++) {
                    line += string(spaceBetweenWords + (extraSpaces > 0 ? 1 : 0), ' ') + words[k];
                    extraSpaces--;
                }
            }

            result.push_back(line);
            i = j;
        }

        return result;
    }
};