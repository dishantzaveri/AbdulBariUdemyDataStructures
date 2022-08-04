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

int Get(struct Array arr, int index)
{
    if (index >= 0 && index < arr.length)
        return arr.A[index];
    else
        return -1;
}

void Set(struct Array *arr, int index, int x)
{
    if (index >= 0 && index < arr->length)
        arr->A[index] = x;
}

int Max(struct Array arr)
{
    int i;
    int max = arr.A[0];
    for (i = 1; i < arr.length; i++)
        if (arr.A[i] > max)
            max = arr.A[i];
    return max;
}

int Min(struct Array arr)
{
    int i;
    int min = arr.A[0];
    for (i = 1; i < arr.length; i++)
        if (arr.A[i] < min)
            min = arr.A[i];
    return min;
}

int Sum(struct Array arr)
{
    int i;
    int sum = 0;
    for (i = 0; i < arr.length; i++)
        sum += arr.A[i];
    return sum;
}

float Average(struct Array arr)
{
    return (float)Sum(arr) / arr.length;
}

int main()
{
    struct Array arr = {{2, 3, 4, 5, 6}, 10, 5};
    // printf("%d \n", Get(arr, 14));
    // Set(&arr, 0, 15);
    printf("%f \n", Average(arr));
    Display(arr);
    return 0;
}
