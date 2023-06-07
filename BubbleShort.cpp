// Bubble Short - Mehedi Hasan Mridul
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {10, 2, 5, 4, 3, 2, 12};
    int i, j, size = 7;
    for (i = 0; i < size - 1; i++)
    {
        int swap = 0;
        for (j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swap = 1;
            }
            if (swap = 0)
            {
                break;
            }
        }
    }
    cout << "After sorting" << endl;
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}