#include <stdio.h>

int main()
{
    int A[5];
    int i;
    for(i=0;i<5;i++)
    {
        printf("address of A[%u]: ",&A[i]);
        // scanf("%d",&A[i]);
    }
}