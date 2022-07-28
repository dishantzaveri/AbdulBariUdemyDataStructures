
#include <iostream>

using namespace std;

struct Rectangle {
    int length;
    int breadth;
};

// void fun(struct Rectangle *p)
// { 
//     p->length = 20;   //call by address will modify the lenth in main function too , call by value wont . 
//     // r.length = 20;   
//     cout<<"length"<< p->length<<endl;
//     cout<<"breadth"<< p->breadth<<endl;
// }

struct Rectangle *fun(){  //pointer to a structure
    struct Rectangle *p;
    p = new Rectangle;
    // p=(struct Rectangle *)malloc(sizeof(struct Rectangle));

    p->length=15;
    p->breadth=7;
    return p;
}



int main()

{
    // struct Rectangle r = {10,5};
    // fun(&r);

    struct Rectangle *ptr = fun();
    cout << "Length = " << ptr->length << " Breadth = " << ptr->breadth << endl;
    return 0;
}