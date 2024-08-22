class Solution {
private:
    bool valid(char ch){
        return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9');
    }

    char toLowerCase(char ch){
        if (ch >= 'A' && ch <= 'Z') {
            return ch - 'A' + 'a';
        }
        return ch;
    }

    bool checkPalindrome(const string& a){
        int s = 0;
        int e = a.length() - 1;
        while (s <= e) {
            if (a[s] != a[e]) {
                return false;
            }
            s++;
            e--;
        }
        return true;
    }

public:
    bool isPalindrome(string s) {
        // Remove invalid characters
        string temp = "";
        for (char ch : s) {
            if (valid(ch)) {
                temp.push_back(ch);
            }
        }

        // Convert to lowercase
        for (int j = 0; j < temp.length(); j++) {
            temp[j] = toLowerCase(temp[j]);
        }

        // Check if palindrome
        return checkPalindrome(temp);
    }
};
