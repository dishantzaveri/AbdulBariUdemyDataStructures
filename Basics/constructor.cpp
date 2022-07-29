#include <iostream>
#include <stdio.h>

using namespace std;

class Rectangle
{   private:
    int length;
    int width;  
    public:
    Rectangle()  //default constructor
    {
        length=0;
        width=0;
    }
    Rectangle(int l,int w)   // constructor with parameters
    {
        length=l;
        width=w;
    }
    int area()
    {
        return length * width;
    }
    int perimeter()
    {
        return 2 * (length + width);
    }   //constructor is a special function which is called when an object is created

    int getLength()
    {
        return length;
    }
    void setLength(int l)
    {
        length=l;
    }
    int getWidth()
    {
        return width;
    }
    void setWidth(int w)
    {
        width=w;
    }
    ~Rectangle()  //destructor
    {
        cout<<"Destructor called"<<endl;    //destructor is called when an object is destroyed
    }

};

    int main()

    {
        Rectangle r(10,5);  //constructor with parameters
        cout << "Area is " << r.area() << endl;
        cout << "Perimeter is " << r.perimeter() << endl;
        return 0;

    }