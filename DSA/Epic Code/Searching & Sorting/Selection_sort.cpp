#include <iostream>
using namespace std;
void selection_sort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        cout << endl;
        cout << "Pass-" << i + 1 << endl;
        int minindex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[minindex])
            {
                minindex = j;
            }
        }
        swap(a[minindex], a[i]);
        for (int k = 0; k < n; k++)
        {
            cout << a[k] << " ";
        }
    }
}

int main()
{
    int n;
    cout << "Enter the array size:" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the array elements :" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    selection_sort(arr, n);
    cout << endl;
    cout << "After sorting elements are :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
// T.C = O(n^2) (Both Best & worst)
// S.C = O(1)
// use when array size is small