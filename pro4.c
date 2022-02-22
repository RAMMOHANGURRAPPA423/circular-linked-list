#include <stdio.h>
 struct abc{
     int a;
     char b;
     float c;
 };
 void main(){
     typedef struct abc A;
     A x={1,'A',2.3};
     printf("%d %c %f",x.a,x.b,x.c);
     
 }
