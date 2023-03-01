#include <iostream>
#define N 7
using namespace std;
void ReorderMe(int a[], int n);
int main()
{
    int arr[N], i, f;
    for (i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    f = arr[0];
    cout << "Reorder Value: " << f << endl
         << "Array after reorder: ";
    ReorderMe(arr, N);
    for (i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
void ReorderMe(int a[], int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        j = n - 1;

        while (j != i)
        {
            if (a[j] < a[i])
            {
                a[j] = a[j] + a[i];
                a[i] = a[j] - a[i];
                a[j] = a[j] - a[i];
            }
            j--;
        }
    }
}