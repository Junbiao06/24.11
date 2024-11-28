#include <stdio.h>

void merge(int arr[], int left, int mid, int right)
{
    int n1 = mid - left + 1; // 左子数组的大小
    int n2 = right - mid;    // 右子数组的大小

    // 临时数组
    int L[n1], R[n2];

    // 将数据拷贝到临时数组 L[] 和 R[]
    for (int i = 0; i < n1; i++)
    {
        L[i] = arr[left + i];
    }
    for (int j = 0; j < n2; j++)
    {
        R[j] = arr[mid + 1 + j];
    }

    // 合并两个子数组到原数组 arr[]
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // 如果左子数组 L[] 中有剩余元素
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    // 如果右子数组 R[] 中有剩余元素
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int left, int right)
{
    if (left < right)
    {
        // 计算中间位置
        int mid = left + (right - left) / 2;

        // 递归排序左半部分
        mergeSort(arr, left, mid);
        // 递归排序右半部分
        mergeSort(arr, mid + 1, right);

        // 合并两个已排序的子数组
        merge(arr, left, mid, right);
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {12, 11, 13, 5, 6, 7};
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    printf("原始数组: ");
    printArray(arr, arrSize);

    mergeSort(arr, 0, arrSize - 1);

    printf("排序后的数组: ");
    printArray(arr, arrSize);

    return 0;
}
