
#include <stdio.h>
int sum(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int div(int a,int b);
int main(){
    int choice,res,v1,v2;
    printf("enter two values:");
    scanf("%d %d",&v1,&v2);
    printf("enter choice");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        res=sum(v1,v2);
        printf("sum of two values =%d",res);
        break;
        case 2:
        res=sub(v1,v2);
        printf("sub of two values =%d",res);
        break;
         case 3:
        res=mul(v1,v2);
        printf("mul of two values =%d",res);
        break;
        case 4:
        res=div(v1,v2);
        printf("div of two values =%d",res);
        break;
        default:
        printf("worng choice");
    }
    return 0;
}
int sum(int a,int b){
    int sum=a+b;
    return sum;
}
int sub(int a,int b){
    int sub=a-b;
    return sub;
}
int mul(int a,int b){
    int mul=a*b;
    return mul;
}
int div(int a,int b){
    int div=a/b;
    return div;
}
