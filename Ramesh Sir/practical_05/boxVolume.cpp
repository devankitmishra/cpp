#include <iostream>
using namespace std;

class Box
{
private:
    int length;
    int width;
    int height;

public:
    // Constructor
    Box(int l = 1, int w = 1, int h = 1)
    {
        length = l;
        width = w;
        height = h;
    }

    // Function to calculate volume
    int volume()
    {
        return length * width * height;
    }

    Box operator*(int factor)
    {
        return Box(length * factor, width * factor, height * factor);
    }

    Box operator/(int factor)
    {
        return Box(length / factor, width / factor, height / factor);
    }

    void display()
    {
        cout << "Box dimensions: " << length << " x " << width << " x " << height << endl;
        cout << "Volume: " << volume() << endl;
    }
};

int main()
{
    Box box1(2, 3, 4);

    // The third box is two times the size of the first box
    Box box3 = box1 * 2;

    // The second box is half the size of the third box
    Box box2 = box3 / 2;

    // Displaying volumes and dimensions
    cout << "First Box:" << endl;
    box1.display();
    cout << endl;

    cout << "Second Box (half of third box):" << endl;
    box2.display();
    cout << endl;

    cout << "Third Box (two times the size of first box):" << endl;
    box3.display();
    cout << endl;

    return 0;
}
