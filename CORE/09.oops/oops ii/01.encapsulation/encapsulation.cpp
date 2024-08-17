#include<iostream>
using namespace std;

class Student {

    private:
        string name;
        int age;
        int height;

    public:
    int getAge() {
        return this->age;
    }
};

int main() {

    Student first;

    cout << "Student class contains some data members and some fountions tht's it \nEncapsulation " << endl;

    return 0;
}