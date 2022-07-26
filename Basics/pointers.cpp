#include<iostream>

using namespace std;

int main()

{
    // int a=10;
    // int *p;
    // p=&a;

    // cout<<a<<endl;
    // printf("using pointer %d  \n", p);
    // printf("using pointer %d  \n", *p);
    // printf("using pointer %d  %d \n", &a , p);

    int A[5]={1,2,3,4,5};

    int *p;

    int *p1;
    char *p2;
    float *p3;
    double *p4;
    long *p5;
    long long *p6;
    short *p7;
    unsigned int *p8;
    unsigned char *p9;
    unsigned long *p10;
    unsigned long long *p11;
    unsigned short *p12;
    struct Rect *p13;

    cout<<"size of int is "<<sizeof(p1)<<endl;
    cout<<"size of char is "<<sizeof(p2)<<endl;
    cout<<"size of float is "<<sizeof(p3)<<endl;
    cout<<"size of double is "<<sizeof(p4)<<endl;
    cout<<"size of long is "<<sizeof(p5)<<endl;
    cout<<"size of long long is "<<sizeof(p6)<<endl;
    cout<<"size of short is "<<sizeof(p7)<<endl;
    cout<<"size of unsigned int is "<<sizeof(p8)<<endl;
    cout<<"size of unsigned char is "<<sizeof(p9)<<endl;
    cout<<"size of unsigned long is "<<sizeof(p10)<<endl;
    cout<<"size of unsigned long long is "<<sizeof(p11)<<endl;
    cout<<"size of unsigned short is "<<sizeof(p12)<<endl;
    cout<<"size of struct Rect is "<<sizeof(p13)<<endl;

    //all the answers are 4

        // q=A;

    // p=(int*)malloc(5*sizeof(int));

    p=new int[5];

    p[0]=0;
    p[1]=1;
    p[2]=2;
    p[3]=3;
    p[4]=4;
    

    for (int i=0; i<5; i++)
    {
        cout<<p[i]<<endl;
    }

    delete [] p; 
    
    // delete in c++ free(p) in c . array ho toh []
 
    return 0;
}