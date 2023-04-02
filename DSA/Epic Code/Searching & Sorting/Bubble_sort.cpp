#include <iostream>
using namespace std;

int total_comparison=0;
// This is Optimise Bubble sort
void Bubble_sort(int a[], int n)
{   
    
    for (int i = 0; i < n - 1; i++) // if i=1 then i<n
    {
        cout << endl;
        cout << "Pass-" << i + 1 << endl;
        bool flag = false;
        for (int j = 0; j < n - i - 1; j++) // j=0 and j<n-i
        {   total_comparison++;
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                flag = true;
            }
        }
        if (flag == false)
        {
            break;
        }
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
    Bubble_sort(arr, n);
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

/*T.C = O(n) -> Best case
 T.C = O(n^2) -> Worst case
 S.C = O(1)    */
