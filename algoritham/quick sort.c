# include <stdio.h>



void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}



void quicksort(int a[], int p, int r)
{
    if(p < r)
    {
        int q;
        q = partition(a, p, r);
        quicksort(a, p, q);
        quicksort(a, q+1, r);
    }
}

int partition (int a[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);


    for (int j = low; j <= high- 1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
void printArray(int a[], int size)
{
    int i;
    for (i=0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {9, 7, 5, 11, 12, 2, 14, 3, 10, 6};
    int n = sizeof(arr)/sizeof(arr[0]);

    quickSort(arr, 0, n-1);

    printf("Sorted array: n");
    printArray(arr, n);
    return 0;
}
