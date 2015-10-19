#include <stdio.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int n)
{
    int i, j, min_valId;

    for(i = 0; i < n -1; i++)
    {
        min_valId = i;
        for(j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[min_valId])
                min_valId = j;
        }
        swap(&arr[min_valId], &arr[i]);
    }
}

void printArray(int arr[], int n)
{
    int i;
    for(i = 0; i < n; i++)
        printf("%d\t", arr[i]);
    printf("\n");
}

int main()
{
    int arr[] = {23,78,3,67,9,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    printArray(arr,n);
    selectionSort(arr,n);
    printArray(arr,n);

    return 0;
}
