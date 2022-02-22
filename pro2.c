#include <stdio.h>

int main()
{
    typedef int Array[5];
    Array x={1,2,3,4,5};
    int i;
    printf("Array elements are:");
    for(i=0;i<5;i++){
     printf("%d\n",x[i]);
    }
    }
