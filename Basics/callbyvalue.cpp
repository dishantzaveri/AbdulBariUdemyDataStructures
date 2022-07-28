#include <iostream>

using namespace std;

int add(int a, int b)
{
    a++;
    b--;
    --b;
    cout << a << endl;
    cout << b << endl;
}

int main()

{
    int a = 10;
    int b = 20, sum;

    sum = add(a, b);
    // int c = add(a, b);
    // cout << "sum is" << sum;

    cout << a << endl; // here a and b will be 10 20 only wont change . formal para changed but actual para wont be changed

    cout << b << endl;
    return 0;
}