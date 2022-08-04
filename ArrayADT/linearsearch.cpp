#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

struct Array
{
    int A[10];
    int size;
    int length;
};

int LinearSearch(struct Array arr, int x)
{
    int i;
    for (i = 0; i < arr.length; i++)
        if (arr.A[i]==x)
            return i;
    return -1;
}

int main()
{
    struct Array arr = {{2, 3, 4, 5, 6}, 10, 5};
    printf("%d \n",LinearSearch(arr, 6));
    return 0;
}