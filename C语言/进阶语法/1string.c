#include <stdio.h>
int main()
{
    char atr[99]="hello world";
    printf("%s\n",atr);
    char str[99];
    scanf("%s",str);
    printf("%s",str);
    gets(str);
    printf("%s",str);
}