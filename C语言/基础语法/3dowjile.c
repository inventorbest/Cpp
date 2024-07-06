//dowhile例子
//dowhile与while的不同
/*
在C语言中，`do-while`循环和`while`循环都用于重复执行一段代码，直到指定的条件不再满足为止。它们之间的主要区别在于循环体内的代码执行次数不同。

`while`循环首先检查条件是否满足，如果满足则执行循环体内的代码，否则跳过循环。这意味着如果条件一开始就为假，循环体内的代码可能一次都不执行。

`do-while`循环则先执行一次循环体内的代码，然后检查条件是否满足。如果满足，则继续执行循环体内的代码，否则跳出循环。这意味着`do-while`循环体内的代码至少会执行一次，即使条件一开始就为假。

以下是`while`循环和`do-while`循环的示例：

```C
// while循环
int i = 0;
while (i < 5) {
    printf("%d ", i);
    i++;
}

// do-while循环
int j = 0;
do {
    printf("%d ", j);
    j++;
} while (j < 5);
```

在上面的示例中，`while`循环只打印数字0到4，而`do-while`循环会先打印数字0，然后才是1到4。这就是`do-while`循环与`while`循环的主要区别。

*/
#include <stdio.h>
int main()
{
    int i = 5;
    do
    {
        printf("%d ", i);
    } while (i < 5);
    //i=5照样能进去
}