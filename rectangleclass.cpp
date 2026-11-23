#include <iostream>
using namespace std;

class Rectangle
{
private:
    float length;
    float breadth;

public:
    void getData()
    {
        cout << "Enter length: ";
        cin >> length;

        cout << "Enter breadth: ";
        cin >> breadth;
    }

    float area()
    {
        return length * breadth;
    }

    float perimeter()
    {
        return 2 * (length + breadth);
    }

    void display()
    {
        cout << "\n--- Rectangle Details ---" << endl;
        cout << "Length: " << length << endl;
        cout << "Breadth: " << breadth << endl;
        cout << "Area: " << area() << endl;
        cout << "Perimeter: " << perimeter() << endl;
    }
};

int main()
{
    Rectangle r;

    r.getData();
    r.display();

    return 0;
}