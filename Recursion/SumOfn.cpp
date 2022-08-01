#include <iostream>
using namespace std;

// int main()
// {
//     int n, sum = 0;
//     cout << "Enter a number: ";
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//         sum += i;
//     cout << "Sum of first " << n << " natural numbers is " << sum;
//     return 0;
// }

int sum(int n)
{
    if (n == 0)
        return 0;
    return sum(n - 1) + n;
};

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Sum of first " << n << " natural numbers is " << sum(n);
    return 0;
}