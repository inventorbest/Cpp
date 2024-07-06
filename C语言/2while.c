//打印99乘法表
#include <stdio.h>
int main()
{
    int i=0,j=0;
    while(i<10)
    {
        j=1;
        while(j<=i)
        {
            printf("%d*%d=%d\t",j,i,i*j);
            j++;
        }
        printf("\n");
        i++;
    }
}