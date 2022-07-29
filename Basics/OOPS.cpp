#include <iostream>
#include <stdio.h>

using namespace std;

class Rectangle
{
public:
    int length;
    int width;

    int area()
    {
        return length * width;
    }

    int perimeter()
    {
        return 2 * (length + width);
    }

    void initialize(int l, int w)
    {
        length = l;
        width = w;
    }

}; // structure has all the functions and variables in it

int main()

{
    Rectangle r;

    int l, w;
    r.initialize(l, w);

    cout << "Enter length: ";
    cin >> r.length;
    cout << "Enter width: ";
    cin >> r.width;
    cout << "Area is " << r.area() << endl;
    cout << "Perimeter is " << r.perimeter() << endl;
    return 0;
}
