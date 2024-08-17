#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    string str;
    getline(cin, str);
    
    cout<<s.size()<<" "<<str.size();
    cout<<"\n"<<s+str;
    
    char t;
    t=s[0];
    s[0]=str[0];
    str[0]=t;
    cout<<endl<<s<<" "<<str;
  
    return 0;
}