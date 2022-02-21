
#include <stdio.h>
int swap(int a,int b);
int main()
{
  int a=10,b=20;
  int(*ptr)(int a,int b)=&swap;
  ptr(a,b);
  printf("%d %d",a,b);
}
int swap(int a,int b){
    a=a+b;
    b=a-b;
    a=a-b;
}
