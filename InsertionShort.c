#include <stdio.h>
int swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int step, size, temp;
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
    for (int i = 1; i < size; i++)
    // 4 7 5 3 2
    {
        temp = arr[i];
        int j = i-1;
        for ( j ; j >= 0 && arr[j] > temp; j--)
        {
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = temp;
    }
    printf("Here is your shorted array");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}