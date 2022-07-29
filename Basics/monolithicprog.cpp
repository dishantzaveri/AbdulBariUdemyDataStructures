#include <iostream>
#include <stdio.h>

using namespace std;

int area(int length, int width)
{
    return length * width;
}

int perimeter(int length, int width)
{
    return 2 * (length + width);
}

int main()

{
    int length=0, width=0;
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter width: ";
    cin >> width;
    cout << "Area is " << area(length, width) << endl;
    cout << "Perimeter is " << perimeter(length, width) << endl;
    return 0;


}

//modular prog means all the code is divided into diff functions and each function is responsible for a particular task