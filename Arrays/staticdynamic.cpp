#include <stdio.h>
#include <stdlib.h>
#include<iostream>

using namespace std;

int main()
{
    int A[5]={0,1,2,3,4};
   int *p,i;
   p=(int*)malloc(5*sizeof(int));
   p[0] =3;
    p[1] =5;
    p[2] =7;
    p[3] =9;
    p[4] =11;
    for(i=0;i<5;i++)
    {
        printf("%d",A[i]);
        // scanf("%d",&A[i]);
    }
     for(i=0;i<5;i++)
    {
        printf("%d",p[i]);
        // scanf("%d",&A[i]);
    }

}