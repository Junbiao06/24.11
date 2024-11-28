#include <stdio.h>
#include <math.h>

void inputarr(int a[], int n);
void outputarr(int a[], int n);
double avgarr(int a[], int n);
double maxarr(int a[], int n);
double minarr(int a[], int n);
int existfunction(int a[], int n, int x);
void bubblesort(int a[], int n);

int main(void)
{
    int array[10], max, min, x;
    double avg;
    inputarr(array, 10);
    printf("The elements are: ");
    outputarr(array, 10);
    avg = avgarr(array, 10);
    max = maxarr(array, 10);
    min = minarr(array, 10);
    printf("avg: %.2f.\nmax: %d.\nmin: %d.\n", avg, max, min);

    printf("Please input the element you are looking for: ");
    scanf("%d", &x);
    if (existfunction(array, 10, x))
        printf("Exist!\n");
    else
        printf("Not Exist!\n");
    bubblesort(array, 10);
    printf("Listed array: ");
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
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
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

int existfunction(int a[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
            return 1;
    }
    return 0;
}

void bubblesort(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[j + 1] < a[j])
            {
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
}

void mergesort(int a[], int n) // 仅限偶数
{
    while (n / 2 != 0)
    {
        
    }
}