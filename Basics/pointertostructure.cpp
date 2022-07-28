#include <iostream>
#include <stdio.h>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    // Rectangle r={10,5};
    // cout<<r.length<<endl;
    // cout<<r.breadth<<endl;

    // Rectangle *p=&r;
    struct Rectangle *p;
    // p=(struct Rectangle *)malloc(sizeof(struct Rectangle));    // in c
    
    p= new Rectangle; //Dynamic allocation in c++

    p->breadth=7;
    p->length=10;

    cout << p->length << endl;
    cout << p->breadth << endl;

    return 0;
}