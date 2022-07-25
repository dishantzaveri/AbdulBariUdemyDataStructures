#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    // int A[8] = {1,2,3,4,5,6};

    // cout<<sizeof(A)<<endl;
    // cout<<A[1]<<endl;
    // cout<<A[4]<<endl;
    // printf("%d\n",A[4]);

    // cout<<"Hello World!"<<endl;

    // for (int i=0;i<7;i++)
    // {
    //     cout<<A[i]<<endl;
    // }
    // for (int x:A)
    // {
    //     cout<<x<<endl;
    // }

    // for each loop -> very important
    int size;

    scanf("%d", &size);

    // int *ptr = (int *)malloc(sizeof(int) * size);

    int *ptr = new int[size]; // C++

    printf("Enter the elements :");

    for (int i = 0; i < size; i++)

        scanf("%d", &ptr[i]);

    int sum = 0;

    printf("Enter the elements : ");

    for (int i = 0; i < size; i++)

        sum = sum + ptr[i];

    printf("sum of all elements = %d \n", sum);

    free(ptr);
    return 0;
}