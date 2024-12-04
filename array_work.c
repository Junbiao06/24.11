// 一维数组输入输出、查找、删除、增加、修改、bubblesort、随机数

#include <stdio.h>
#include <time.h>
#include<stdlib.h>
#define N 15

void inputarr(int a[], int n);
void bubblesort(int a[], int n);
void outputarr(int a[], int n);
void searchele(int a[], int n);
void deleteele(int a[], int n);
int addele(int a[], int n);
void reviseele(int a[], int n);
void randomarr(int a[], int n);

int main(void)
{
    int n, x, array[N];
    do
    {
    printf("Length: ");
    scanf("%i", &n);
    } while (n < 1 || n > N);
    inputarr(array, n);
    bubblesort(array, n);
    outputarr(array, n);
    while(1)
    {
    printf("What operations to perform? (search: 1 delete: 2 add: 3 revise:4 random:5)\n");
    scanf("%i", &x);
    if(x==1)
    searchele(array, n);
    if(x==2)
    deleteele(array, n);
    if(x==3)
    n = addele(array, n);
    if(x==4)
    reviseele(array, n);
    if(x==5)
    randomarr(array,n);
    }
}

void inputarr(int a[], int n)
{
    printf("Please input %i elements: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%i", &a[i]);
    }
}

void bubblesort(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
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

void outputarr(int a[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%i ", a[i]);
    printf("\n");
}

void searchele(int a[], int n)
{
    int x;
    printf("Search a element: ");
    scanf("%i", &x);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            printf("Found.\n");
            return;
        }
    }
    printf("Not Found.\n");
}

void deleteele(int a[], int n)
{
    int x;
    printf("Remove a element: ");
    scanf("%i", &x);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            for (int j = i; j < n; j++)
            {
                a[j] = a[j + 1];
            }
            n -= 1;
            outputarr(a, n);
            return;
        }
    }
    printf("Not found.\n");
}

int addele(int a[], int n)
{
    if (n > N)
    {
        return n;
    }
    int x, i, j;
    printf("Add a element: ");
    scanf("%i", &x);
    for (i = 0; i < n && a[i] < x; i++)
        ;
    for (j = n - 1; j >= i; j--)
    {
        a[j + 1] = a[j];
    }
    a[i] = x;
    outputarr(a, n + 1);
    return n + 1;
}

void reviseele(int a[], int n)
{
    int x, y;
    printf("Revise\nDelete a element: ");
    scanf("%i", &y);
    printf("Add a element: ");
    scanf("%i", &x);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == y)
        {
            a[i] = x;
            outputarr(a, n);
            return;
        }
    }
    printf("Not found.\n");
}

void randomarr(int a[], int n)
{
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 100 + 1;
    }
    outputarr(a,n);
    bubblesort(a,n);
}