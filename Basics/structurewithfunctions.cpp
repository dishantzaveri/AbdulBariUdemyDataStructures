#include <iostream>
#include <stdio.h>

using namespace std;

struct Rectangle {
    int length;
    int width;
};

int area(Rectangle r) {
    return r.length * r.width;
}

int perimeter(Rectangle r)
{
    return 2 * (r.length + r.width);
}

void initialize(Rectangle *r, int l, int w) {
    r->length = l;
    r->width = w;
}

int main()

{
    Rectangle r = {0, 0};

    int l,w;
    initialize(&r,l,w);

    cout << "Enter length: ";
    cin >> r.length;
    cout << "Enter width: ";
    cin >> r.width;
    cout << "Area is " << area(r) << endl;
    cout << "Perimeter is " << perimeter(r) << endl;
    return 0;
}
