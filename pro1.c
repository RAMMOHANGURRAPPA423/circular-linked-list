#include <stdio.h>

int main()
{
    int a=4;
    a=a++ + ++a + a--;
    printf("%d\n",a);
}
