#include<iostream>
using namespace std;


int fact(int n)
{
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}

int ncr(int n, int r)
{
    if(n==r || r==0)
        return 1;
    else
        return ncr(n-1,r-1)+ncr(n-1,r);
}

int main()
{
    int n,r;
    cout<<"Enter n and r: ";
    cin>>n>>r;
    cout<<"nCr = "<<ncr(n,r);
    return 0;
}