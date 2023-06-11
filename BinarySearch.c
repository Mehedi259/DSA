#include <stdio.h>
int main()
{
    int start, end, middle, n, target;
    scanf("%d", &n);
    start = 0;
    end = n - 1;
    middle = (start + end) / 2;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n Here is your list \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n Which number you want to search \n");
    scanf("%d", &target);
    while (start <= end)
    {
        middle = (start + end) / 2;
        if (arr[middle] == target)
        {
            printf("%d is found on index %d \n", target, middle+1);
            return 0;
        }
        else if (arr[middle] < target)
        {
            start = middle + 1;
        }
        else
        {
            end = middle - 1;
        }
    }
    printf("item not found");

    return 0;
}
