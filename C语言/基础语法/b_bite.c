//位运算符，输入一个数，打印出2进制数字
#include <stdio.h>
int main()
{
    int num;
    printf("输入一个数字：\n");
    scanf("%d",&num);
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<8;j++)
        {
            printf("%d",1&(num>>(31-8*i-j)));
        }
        printf(" ");
    }
}