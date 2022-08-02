#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{
    int A[3][4]={{0,1,2,3},{5,6,7,8},{10,11,12,13}};

    int *B[3];
    int **C;
    int i,j;

    // for(i=0;i<3;i++)
    // {
    //     for(j=0;j<4;j++)
    //     {
    //         cout<<A[i][j]<<endl;
    //     }
    // }

     B[0]=B[1]=B[2]=(int *)malloc(sizeof(int)*4);

    //      for(i=0;i<3;i++)
    // {
    //     for(j=0;j<4;j++)
    //     {
    //         cout<<B[i][j]<<endl;
    //     }
    // }
    C=(int **)malloc(sizeof(int *)*3);
    C[0]=(int *)malloc(sizeof(int)*4);
    C[1]=(int *)malloc(sizeof(int)*4);
    C[2]=(int *)malloc(sizeof(int)*4);

        for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            cout<<C[i][j]<<endl;
        }
    }


    return 0;
}