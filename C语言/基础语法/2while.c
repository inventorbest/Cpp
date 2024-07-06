//打印99乘法表
#include <stdio.h>
#if 0
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
#endif
#if 1
int main()
{
    for(int i=1;i<10;i++)
    {
        for(int j=1;j<=i;j++)
            printf("%d*%d=%d\t",j,i,i*j);
        printf("\n");
    }
}
#endif