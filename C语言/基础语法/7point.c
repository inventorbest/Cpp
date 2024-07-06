#include <stdio.h>
int main()
{
    int a=0,*b=&a;
    *b=999;
    printf("%d\n",a);
}