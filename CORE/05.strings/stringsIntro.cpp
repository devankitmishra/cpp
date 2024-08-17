#include<iostream>
using namespace std;

char toLowerCase(char ch){
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
    }
    
}

bool checkPalindrom(char name[], int n){
    int s = 0;
    int e = n - 1;
    while (s<=e)
    {
        if (toLowerCase( name[s] ) != toLowerCase( name[e] ) )
        {
            return 0;
        }
        else
        {
            s++,e--;
        }
        
    }
    return 1;
  
}

void reverse(char name[], int n){
    int s = 0;
    int e = n-1;
    while (s<e)
    {
        swap(name[s++], name[e--]);
    }
    
}

int getLength(char name[]){
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main(){
    char name[20];
    cout<<"Enter Your Name "<<endl;
    cin>>name;

    cout<<"Your Name is ";
    cout<<name<<endl;

    int n = getLength(name);
    cout<<"Length: "<<n<<endl;

    reverse(name,n);

    cout<<"Your Name is "; 
    cout<<name<<endl;

    cout<<"Palindrom or Not: "<<checkPalindrom(name,n)<<endl;

    cout<<"Character is "<<toLowerCase('g')<<endl;
    cout<<"Character is "<<toLowerCase('G')<<endl;

    return 0;
}