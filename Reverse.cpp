#include <iostream>
#define N 10
using namespace std;
bool reverse(int a[], int n);
int main()
{
    int arr[N], i;

    for (i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    if (reverse(arr, N))
    {

        cout << "Array is symmetric" << endl
             << "Array after reverse:" << endl;
    }
    else
    {
        cout << "Array is NOT symmetric" << endl
             << "Array after reverse:" << endl;
    }
    for (i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
bool reverse(int a[], int n)
{
    int i;
    bool sym = true;
    if ((N & 1) == 0)
    {
        for (i = 0; i < (n / 2); i++)
        {
            if (a[i] != a[n - 1 - i])
                sym = false;
            a[i] += a[n - 1 - i];
            a[n - 1 - i] = a[i] - a[n - 1 - i];
            a[i] = a[i] - a[n - 1 - i];
        }
    }
    else
    {

        for (i = 0; i < ((n - 1) / 2); i++)
        {
            if (a[i] != a[n - 1 - i])
                sym = false;
            a[i] += a[n - 1 - i];
            a[n - 1 - i] = a[i] - a[n - 1 - i];
            a[i] = a[i] - a[n - 1 - i];
        }
    }
    return sym;
}