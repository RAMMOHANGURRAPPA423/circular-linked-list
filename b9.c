#include <stdio.h>
#define N 5
int main()
{
    int arr_1[N]={1,2,3,4,5};
    int arr_2[10],i;
    int *ptr=arr_1;
    for(i=0;i<N;i++)
        arr_2[i]= *(ptr+i);
        for(i=0;i<N;i++)
        printf("%d\n",arr_2[i]);
        return 0;
    
}
