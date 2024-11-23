// 验证哥德巴赫猜想
#include <stdio.h>
#include <math.h>

int judge(int a);

int main(void)
{
    int a;
    printf("Number(Even number ranging from 2 to 2000): "); // even number偶数
    scanf("%i", &a);
    for (int i = 2; i <= a; i++)
    {
        if (judge(i) == 1 && judge(a - i))
        {
            printf("%i+%i=%i", a-i, i, a);
            break;
        }
    }
    return 0;
}

int judge(int a)
{
    int i;
    int n = (int)sqrt(a);
    for (i = 2; i <= n; i++)
    {
        if (a % i == 0)
            break;
    }
    if (i > n)
        return 1;
    else
        return 0;
}