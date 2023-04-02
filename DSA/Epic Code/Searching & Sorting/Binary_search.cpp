#include <iostream>
using namespace std;
int Binary_search(int a[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (a[mid] == key)
        {
            return mid;
        } 
        if (key > a[mid])
        {
            start = mid + 1;
        }
        if (key < a[mid])
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    int n, key;
    cout << "Enter the array size:" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the array elements :" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the element you want to search:" << endl;
    cin >> key;
    int index = Binary_search(arr, n, key);
    if (index == -1)
    {
        cout << "Item not found" << endl;
    }
    else
    {
        cout << "Item found at index :" << index << endl;
    }

    return 0;
}
// T.C = O(logN),where N is size of the array