#include <stdio.h>

int main()
{
  int a=10;
  int b=20;
  const int *ptr=&a;
  printf("%d\n",*ptr);
 // *ptr=30;
  //printf("%d\n",*ptr);
  ptr=&b;
   printf("%d\n",*ptr);
}
