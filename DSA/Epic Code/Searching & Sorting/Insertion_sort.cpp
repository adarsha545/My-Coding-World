#include <iostream>
using namespace std;
int total_comparison=0;
void Insertion_sort(int a[], int n)
{
    for (int i = 1; i < n; i++)

    {
        cout << endl;
        cout << "Pass-" << i << endl;
        int temp = a[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {    
            if (a[j] > temp)
            {   total_comparison++;
                a[j + 1] = a[j];
            }
            else
            {
                break;
            }
        }
        a[j + 1] = temp;
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
    Insertion_sort(arr, n);
    cout << endl;
    cout << "After sorting elements are :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
    cout<<"Total Comparison : "<< total_comparison<<endl;
    return 0;
}
// T.C = O(n^2) -> Worst case
// T.C = O(n) ->Best case
//  S.C = O(1)