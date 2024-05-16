#include <iostream>
#include <sstream>
using namespace std;

class Student {
    private:
        int age;
        int standard;
        string first_name;
        string last_name;
        
    public:
        void set_age(int set_age) {
            age = set_age;
        }

        void set_standard(int set_standard) {
            standard = set_standard;
        }

        void set_first_name(const string& set_first_name) {
            first_name = set_first_name;
        }

        void set_last_name(const string& set_last_name) {
            last_name = set_last_name;
        }

        int get_age() const {
            return age;
        }

        int get_standard() const {
            return standard;
        }

        const string& get_first_name() const {
            return first_name;
        }

        const string& get_last_name() const {
            return last_name;
        }

        string to_string() const {
            stringstream ss;
            ss << age << "," << first_name << "," << last_name << "," << standard;
            return ss.str();
        }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
