#include<iostream>
using namespace std;

class A {
    public:
    void func() {
        cout << " I am A" << endl;
    }
};

class B {
    public:
    void func() {
        cout << " I am B" << endl;
    }
};

class C: public A, public B {
    // public:
    void func(){
        cout<<" I am C" << endl;
    }
    friend int main();
};

int main() {

    C obj;
    // obj.func();

    obj.A::func();
    obj.B::func();
    obj.C::func();

    return 0;
}