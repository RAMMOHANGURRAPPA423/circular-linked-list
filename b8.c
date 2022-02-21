#include <stdio.h>
#define N 5
void main(){
    int i=5,j;
    for(i=1;i<=N;i++){
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
}
