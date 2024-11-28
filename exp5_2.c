// matrix

#include <stdio.h>

void inputarr(int array[][3], int a);
void outputarr(int array[][3], int a);
void transpose(int array[][3], int a);
int sumarr(int array[][3], int a);

int main(void)
{
    int array[3][3];
    inputarr(array, 3);
    printf("The elements are: \n");
    outputarr(array, 3);
    transpose(array, 3);
    printf("After transpose, the elements are: \n");
    outputarr(array, 3);
    printf("Total value of diagonal elements: %d\n",sumarr(array,3));
}

void inputarr(int array[][3], int a)
{
    printf("Please input %d elements: ", a * 3);
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }
}

void outputarr(int array[][3], int a)
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%4d", array[i][j]);
        }
        printf("\n");
    }
}

void transpose(int array[][3], int a)
{
    for (int i = 0; i < a; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            int t = array[i][j];
            array[i][j] = array[j][i];
            array[j][i] = t;
        }
    }
}

int sumarr(int array[][3], int a)
{
    int sum = 0;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
                sum += array[i][j];
        }
    }
    return sum;
}