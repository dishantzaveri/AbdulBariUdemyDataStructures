#include<iostream>
using namespace std;

int power(int m , int n)
{
    if(n==0)
        return 1;
    else
        return m*power(m,n-1);
}   ;

int powerIterative(int m , int n)
{
    int p=1;
    for(int i=1;i<=n;i++)
        p*=m;
    return p;
};

int power1(int m , int n)
{
    if(n==0)
        return 1;
    else if(n%2==0)
        return power1(m*m,n/2);
    else
        return m*power1(m*m,(n-1)/2);
};

int main()
{
    int m,n;
    cout<<"Enter a number: ";
    cin>>m;
    cout<<"Enter power: ";
    cin>>n;
    cout<<m<<" to the power "<<n<<" is "<<power1(m,n);
    return 0;
}