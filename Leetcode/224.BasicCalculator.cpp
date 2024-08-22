#include <iostream>
#include <string>
#include <stack>

using namespace std;

class Solution {
public:
    int calculate(string s) {
        int n = s.size();
        int sum = 0;
        int sign = 1;
        stack<int> tempStack;

        for (int i = 0; i < n; ++i) {
            char c = s[i];
            // number
            if (isdigit(c)) {
                int num = 0;
                while (i < n && isdigit(s[i])) {
                    num = num * 10 + (s[i] - '0');
                    ++i;
                }
                sum += num * sign;
                --i; // Decrement i because it will be incremented in the next iteration of the loop
            }
            // '+'
            else if (c == '+') {
                sign = 1;
            }
            // '-'
            else if (c == '-') {
                sign = -1;
            }
            // '('
            else if (c == '(') {
                tempStack.push(sum);
                tempStack.push(sign);
                sum = 0;
                sign = 1;
            }
            // ')'
            else if (c == ')') {
                sum *= tempStack.top(); tempStack.pop(); // Apply sign before the parenthesis
                sum += tempStack.top(); tempStack.pop(); // Add the result to the sum before the parenthesis
            }
        }

        return sum;
    }
};

int main() {
    Solution sol;
    string s = "1 + (2 - (3 + 4)) + 5";
    cout << sol.calculate(s) << endl; // Output should be 1
    return 0;
}









// class Solution {
// public:
//     int calculate(string s) {
//         int n = s.size();
//         int sum = 0;
//         int sign = 1;
//         stack<int> tempStack;

//         for(int i = 0; i < n; i++)
//         {
//          //number
//             if(s[i]>='0' && s[i]<='9')
//             {
//                 int num=0;
//                 while(n>i && s[i]>='0' && s[i]<='9')
//                 {
//                     num = num*10 + (s[i]-'0');
//                     i++;
//                 }
//                 sum += num*sign;
//                 i--;
//             }
//             //'+'
//             else if(s[i]=='+')
//             {
//                 sign=1;
//             }
//             // '-'
//             else if(s[i]=='-')
//             {
//                 sign=-1;
//             }
//             // '('
//             else if(s[i]=='(')
//             {
//                 tempStack.push(sum);
//                 tempStack.push(sign);
//                 sum = 0;
//                 sign = 1;
//             }
            
//             //')'
//             else if(s[i]==')')
//             {
//                 sum = tempStack.top()*sum;
//                 tempStack.pop();
//                 sum += tempStack.top();
//                 tempStack.pop();
//             }
//         }

//         return sum;

//     }    
// };






















// class Solution {
// public:
// int calculate(string s) {
//     int total = 0;
//     vector<int> signs(2, 1);
//     for (int i=0; i<s.size(); i++) {
//         char c = s[i];
//         if (c >= '0') {
//             int number = 0;
//             while (i < s.size()  &&  s[i] >= '0')
//                 number = 10 * number + s[i++] - '0';
//             total += signs.back() * number;
//             signs.pop_back();
//             i--;
//         }
//         else if (c == ')')
//             signs.pop_back();
//         else if (c != ' ')
//             signs.push_back(signs.back() * (c == '-' ? -1 : 1));
//     }
//     return total;
// }
// };