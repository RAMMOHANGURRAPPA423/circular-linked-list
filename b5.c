
#include <stdio.h>

int main()
{
   int a=20;
   int b=30;
   int* const ptr=&a;
   printf("%d\n",*ptr);
  
   ptr=&b;
    printf("%p\n",ptr);
}
