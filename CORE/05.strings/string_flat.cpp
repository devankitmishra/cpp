#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    cout << "Enter a string: ";
    string inputString;
    getline(std::cin, inputString);

    cout << "Enter a word to search for: ";
    string targetWord;
    cin >> targetWord;

    size_t found = inputString.find(targetWord);
    if (found)
    {
        cout<<"false"<<endl;
    }
    else{
        cout<<"true"<<endl;
    }
    

}