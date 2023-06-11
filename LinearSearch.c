#include <stdio.h>
int main()
{
    int find, n, target, value, flag = 0;
    scanf("%d", &n);
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
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == target)
        {
            flag = 1;
            value = i;
            break;
        }
    }
    if (flag == 1)
        printf("%d is found in location %d", target, value + 1);
    else
    {
        printf("Not found");
    }
}