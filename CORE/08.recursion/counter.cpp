#include<iostream> 
using namespace std;

int print(int n) {

    //base case 
    if(n == 0)
        return ;

    //recursive relation
    print(n-1);

    cout << n << endl << endl;    
}

int main() {

    int n;
    cin >> n;
    cout<<endl;
    print(n);

    return 0;
}