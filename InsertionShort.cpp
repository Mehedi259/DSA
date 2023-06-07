// Mehedi Hasan Mridul
#include <iostream>
using namespace std;
int main()
{
    int i, value, hole, n;
    int a[100];
    cout << "Enter your array item" << endl;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 1; i < n; i++)
    {
        value = a[i];
        hole = i;
        while (hole > 0 && a[hole - 1] > value)
        {
            a[hole] = a[hole - 1];
            hole--;
        }
        a[hole] = value;
    }
    cout << "Your array is Sorted" << endl;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
}