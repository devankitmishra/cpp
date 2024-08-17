#include <iostream>
using namespace std;

class IGIT {
    
    int a;
    static int b;
    
    public:
    float c;
    static float d = 9.8;
};

// Define static members outside the class

// float IGIT::d;

int main() {
    IGIT obj;

    cout << "Size of class IGIT = " << sizeof(IGIT) << endl;
    cout << "Size of class IGIT = " << sizeof(obj) << endl;
    int num = IGIT::d;
    cout << "d =" << num<< endl;
    return 0;
}
