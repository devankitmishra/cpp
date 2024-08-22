class Solution {
public:
    Solution() {
        belowTen = {{1, "One"},   {2, "Two"},   {3, "Three"},
                    {4, "Four"},  {5, "Five"},  {6, "Six"},
                    {7, "Seven"}, {8, "Eight"}, {9, "Nine"}};
        belowTwenty = {{10, "Ten"},      {11, "Eleven"},    {12, "Twelve"},
                       {13, "Thirteen"}, {14, "Fourteen"},  {15, "Fifteen"},
                       {16, "Sixteen"},  {17, "Seventeen"}, {18, "Eighteen"},
                       {19, "Nineteen"}};
        belowHundred = {{2, "Twenty"}, {3, "Thirty"}, {4, "Forty"},
                        {5, "Fifty"},  {6, "Sixty"},  {7, "Seventy"},
                        {8, "Eighty"}, {9, "Ninety"}};
    }

    string numberToWords(int num) {
        if (num == 0)
            return "Zero";
        return find(num);
    }

private:
    unordered_map<int, string> belowTen;
    unordered_map<int, string> belowTwenty;
    unordered_map<int, string> belowHundred;

    string find(int num) {
        string result = "";
        if (num < 10)
            result = belowTen[num];
        else if (num < 20)
            result = belowTwenty[num];
        else if (num < 100)
            result =
                belowHundred[num / 10] + (num % 10 ? " " + find(num % 10) : "");
        else if (num < 1000)
            result = find(num / 100) + " Hundred" +
                     (num % 100 ? " " + find(num % 100) : "");
        else if (num < 1000000)
            result = find(num / 1000) + " Thousand" +
                     (num % 1000 ? " " + find(num % 1000) : "");
        else if (num < 1000000000)
            result = find(num / 1000000) + " Million" +
                     (num % 1000000 ? " " + find(num % 1000000) : "");
        else
            result = find(num / 1000000000) + " Billion" +
                     (num % 1000000000 ? " " + find(num % 1000000000) : "");

        return result;
    }
};




//my approach
/*  
class Solution {
public:
    unordered_map<int, string> num1 = {
        {1, "One"},        {2, "Two"},       {3, "Three"},    {4, "Four"},
        {5, "Five"},       {6, "Six"},       {7, "Seven"},    {8, "Eight"},
        {9, "Nine"},       {10, "Ten"},      {11, "Eleven"},  {12, "Twelve"},
        {13, "Thirteen"},  {14, "Fourteen"}, {15, "Fifteen"}, {16, "Sixteen"},
        {17, "Seventeen"}, {18, "Eighteen"}, {19, "Nineteen"}};

    unordered_map<int, string> num2 = {
        {20, "Twenty"}, {30, "Thirty"},  {40, "Forty"},  {50, "Fifty"},
        {60, "Sixty"},  {70, "Seventy"}, {80, "Eighty"}, {90, "Ninety"}};

    unordered_map<int, string> num3 = {{100, "Hundred"},
                                       {1000, "Thousand"},
                                       {1000000, "Million"},
                                       {1000000000, "Billion"}};

    string numberToWords(int num) {
        if (num == 0)
            return "Zero";
        if (num < 20)
            return num1[num];
        if (num < 100)
            return num2[(num / 10) * 10] +
                   (num % 10 ? " " + num1[num % 10] : "");
        if (num < 1000)
            return num1[num / 100] + " " + num3[100] +
                   (num % 100 ? " " + numberToWords(num % 100) : "");

        // Use long long to handle large numbers
        for (long long i = 1000; i <= 1000000000000LL; i *= 1000) {
            if (num < i * 1000) {
                return numberToWords(num / i) + " " + num3[i] +
                       (num % i ? " " + numberToWords(num % i) : "");
            }
        }

        return "";
    }
};
*/