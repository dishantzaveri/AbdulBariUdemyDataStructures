#include<iostream>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
    char x;
} r3,r2;

int main()
{
    struct Rectangle r={10,5,'d'};

    r.length=1;
    r.breadth=2;

    // printf("%lu",sizeof(r));

    cout<<r.length<<endl;
    cout<<r.breadth<<endl;
    cout<<r.x<<endl;


    return 0;
}



