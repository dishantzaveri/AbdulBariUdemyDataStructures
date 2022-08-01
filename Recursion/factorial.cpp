#include<iostream>
using namespace std;

int fact(int n)
{
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}

int iterativeFact(int n)
{
    int f=1;
    for(int i=1;i<=n;i++)
        f*=i;
    return f;
}

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Factorial of "<<n<<" is "<<fact(n);
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Factorial of "<<n<<" is "<<iterativeFact(n);
    return 0;
}