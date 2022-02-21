#include <stdio.h>

int main()
{
   int a=10;
   int b=20;
   int* const ptr=&a;
   printf("%d\n",*ptr);
   ptr=&b;
   printf("%d\n",*ptr); 
}
