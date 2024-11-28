#include <stdio.h>

void inputarr(int a[], int n);            // 为数组输入n个元素
void outputarr(int a[], int n);           // 输出数组a的n个元素
double avgarr(int a[], int n);            // 求数组a中n个元素的平均值
double maxarr(int a[], int n);            // 求数组a中n个元素的最大值
double minarr(int a[], int n);            // 求数组a中n个元素的最小值
int existfunction(int a[], int n, int x); // 数组a中是否存在x，存在返回1，否则返回0
void bubblesort(int a[], int n);          // 升序排序，例6.12

int main(void)
{
    int array[10], max, min, x;
    double avg;
    inputarr(array, 10);
    outputarr(array, 10);
    avg = avgarr(array, 10);
    max = maxarr(array, 10);
    min = minarr(array, 10);
    printf("avg: %.2f.\nmax: %d.\nmin: %d.", avg, max, min);

    printf("Please input the element you are looking for: ");
    scanf("%d", &x);
    if (existfunction(array, 10, x))
        printf("Exist!\n");
    else
        printf("Not Exist!\n");

    bubblesort(array, 10);
    printf("Listed Array: \n");
    outputarr(array, 10);
    return 0;
}

void inputarr(int a[], int n)
{
    printf("Please input %d elements: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}

void outputarr(int a[], int n)
{
    printf("The elements are: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

double avgarr(int a[], int n)
{
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return sum / 10;
}

double maxarr(int a[], int n)
{
    int max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    return max;
}

double minarr(int a[], int n)
{
    int min = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] < min)
            min = a[i];
    }
    return min;
}

void bubblesort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[j] > a[j + 1])
            {
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
}