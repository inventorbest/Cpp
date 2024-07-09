#include <stdio.h>
int main()
{
    //区间[1,9]
    int num;
    printf("请输入一个数字：\n");
    scanf("%d",&num);
    if(num>=1&&num<=10)
    {
        printf("对了\n");
    }
    else
    {
        printf("错了");
    }
    return 0;
}