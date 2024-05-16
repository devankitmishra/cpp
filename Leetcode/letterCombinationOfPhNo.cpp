// #include <iostream>
// #include <vector>
// #include <sstream>
// using namespace std;

// int main()
// {
//     string input;
//     getline(cin, input);
//     vector<string> mapping(10);
//     mapping[2] = "abc";
//     mapping[3] = "def";
//     mapping[4] = "ghi";
//     mapping[5] = "jkl";
//     mapping[6] = "mno";
//     mapping[7] = "pqrs";
//     mapping[8] = "tuv";
//     mapping[9] = "wxyz";

//     vector<pair<char, char>> charPairs;
//     if (input.length() == 2)
//     {
//         int i = input[0] - '0';
//         int j = input[1] - '0';
        
//         for (char c1 : mapping[i])
//         {
//             for (char c2 : mapping[j])
//             {
//                 charPairs.push_back(make_pair(c1, c2));
//             }
//         }
//     }

//     // Vector to store pairs of characters

//     for (const auto &pair : charPairs)
//     {
//         cout << "(" << pair.first << ", " << pair.second << ") ";
//     }

//     return 0;
// }










#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main() {
    string input;
    getline(cin, input);
    vector<string> mapping(10);
    mapping[2] = "abc";
    mapping[3] = "def";
    mapping[4] = "ghi";
    mapping[5] = "jkl";
    mapping[6] = "mno";
    mapping[7] = "pqrs";
    mapping[8] = "tuv";
    mapping[9] = "wxyz";

    vector<string> result;  // Vector to store strings

    if (input.length() == 2) {
        int i = input[0] - '0';
        int j = input[1] - '0';

        for (char c1 : mapping[i]) {
            for (char c2 : mapping[j]) {
                string combination;
                combination.push_back(c1);
                combination.push_back(c2);
                result.push_back(combination);
            }
        }
    }
    else if (input.length() == 1) {
        int i = input[0] - '0';

        // Add each character separately to the result vector
        for (char c1 : mapping[i]) {
            result.push_back(string(1, c1));
        }
    }

    for (const auto &str : result) {
        cout << str << " ";
    }

    return 0;
}

