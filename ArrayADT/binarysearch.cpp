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

int BinarySearch(struct Array arr, int key)
{
    int low = 0;
    int high = arr.length - 1;
    int mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr.A[mid] == key)
            return mid;
        else if (arr.A[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int RBinarySearch(int a[], int low, int high, int key)
{
    int mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (a[mid] == key)
            return mid; 
        else if (key<a[mid] )
            return RBinarySearch(a, low, mid - 1,key);
        else
              return RBinarySearch(a, mid+1, high,key);
    }
    return -1;
}

int main()
{
    struct Array arr = {{2, 3, 4, 5, 6}, 10, 5};
    printf("%d \n",RBinarySearch(arr.A,0,arr.length, 6));
    return 0;
}