#include <stdio.h>
int swap_ref(int *x,int *y);
int swap_call(int x,int y);

int main()
{
    int choice, v1,v2;
    printf("enter two values:");
    scanf("%d %d",&v1,&v2);
    printf("enter choice:");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        swap_ref(&v1,&v2);
        printf("%d %d",v1,v2);
        break;
        case 2:
        swap_call(v1,v2);
        printf("%d %d",v1,v2);
        break;
        default :
        printf("wrong choice");
    }
    return 0;
}
int swap_ref(int *a,int *b){
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}
int swap_call(int a,int b){
    a=a+b;
    b=a-b;
    a=a-b;
}
