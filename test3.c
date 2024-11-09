#include <stdio.h>
int main(void)
{

    int i, sum = 0;
    for (i = 1;; sum++)
    {
        if (sum > 10)
            break;
        sum += ++i;
    }
    printf("%i,%i",i,sum);
}