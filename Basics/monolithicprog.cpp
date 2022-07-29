#include <iostream>
#include <stdio.h>

using namespace std;

int main()

{
    int l=0,b=0;
    cout<<"Enter the length and breadth of the rectangle"<<endl;
    cin>>l>>b;

    int area=l*b;
    cout<<"The area of the rectangle is "<<area<<endl;
    int peri=2*(l+b);
    cout<<"The perimeter of the rectangle is "<<peri<<endl;
    return 0;


}

//monolithic prog means all the code is in main funct