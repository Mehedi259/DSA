#include <stdio.h>
int swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int step, size,temp;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Here is your array");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("Here is your shorted array");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}