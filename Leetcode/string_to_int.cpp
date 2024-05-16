#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int extractInteger(const string& str) {
    auto it = find_if(str.begin(), str.end(), [](char c) {
        return isdigit(c) || c == '-';
    });

    string numericPart = str.substr(it - str.begin());
    return stoi(numericPart);
    

}
int main() {
    string str = "what if 123";
    int convertedInt = extractInteger(str);

    cout << "Converted integer: " << convertedInt << std::endl;

    return 0;
}














// int intExtracter(const string& str){
    //     auto it = find_if(str.begin(), str.end(), [](char c) {
    //         return isdigit(c) || c == '-';
    //     });
    //     string numericPart = str.substr(it - str.begin());
    //     return stoi(numericPart);
    // }

    int myAtoi(string s) {
        // int convertedInt = intExtracter(s);
        // return convertedInt;
        int a = stoi(s);
        return a;
    }