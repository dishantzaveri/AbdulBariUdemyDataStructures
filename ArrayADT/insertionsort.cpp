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

void InsertSort(struct Array *arr, int x)
{
    int i = arr->length - 1;
    if (arr->length == arr->size)
    {
        printf("Array is full\n");
        return;
    }
    while (i >= 0 && arr->A[i] > x)
    {
        arr->A[i + 1] = arr->A[i];
        i--;
    }
    arr->A[i + 1] = x;
    arr->length++;
}

int isSorted(struct Array arr)
{
    int i;
    for (i = 0; i < arr.length - 1; i++)
    {
        if (arr.A[i] > arr.A[i + 1])
            return 0;
    }
    return 1;
}

void Swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void Rearrange(struct Array *arr)
{
    int i = 0, j;
    j = arr->length - 1;
    while (i < j)
    {
        while (arr->A[i] < 0)
            i++;
        while (arr->A[j] >= 0)
            j--;
        if (i < j)
            Swap(&arr->A[i], &arr->A[j]);
    }
}

int main()
{
    struct Array arr = {{2, -3, 25, 10, -15,-7}, 7, 5};
    // InsertSort(&arr, 7);
    // printf("%d\n", isSorted(arr));
    Rearrange(&arr);
    Display(arr);
    return 0;
}
