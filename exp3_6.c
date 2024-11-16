#include <stdio.h>
int main(void)
{
    int i, j, k, n;
    n=7/2;
    for(i=1;i<=n+1;i++)  //上三角加中间一行
    {
        for(j=i;j<n+1;j++)//空格设置
        {
            printf(" ");
            printf(" ");
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++)//星星设置
        {
            printf(" * ");
        }
        printf("\n");
    }

    for(i=1;i<=n;i++)//下三角
    {
        for(j=i;j>=1;j--)//空格设置
        {
            printf(" ");
            printf(" ");
            printf(" ");
        }
        for(k=1;k<=2*n-2*i+1;k++)//星星设置，需要简单数学计算
        {
            printf(" * ");
        }
        printf("\n");
    }
}