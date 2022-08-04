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

void Display(struct Array arr)
{
    int i, j;
    printf("elements are \n");
    for (i = 0; i < arr.length; i++)
        printf("%d ", arr.A[i]);
}

void Append(struct Array *arr, int x)
{
    if (arr->length < arr->size)
        arr->A[arr->length++] = x;
}

int main()
{
    struct Array arr = {{2, 3, 4, 5, 6}, 10, 5};
    Append(&arr, 8);
    Display(arr);
    return 0;
}