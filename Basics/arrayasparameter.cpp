#include <iostream>

using namespace std;

void fun(int *A, int n) // or A[]
{
    A[0] = 15;
    // cout <<sizeof(A)/sizeof(int) << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << A[i] << endl;
    // }
}

int main()
{
    int A[] = {2, 4, 6, 8};
    int n = 4;
    fun(A, n);
    //  cout <<sizeof(A)/sizeof(int) << endl;
    for (int x : A)
        cout << x << "" << endl;

    return 0;
}