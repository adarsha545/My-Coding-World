#include<iostream>
using namespace std;
int partition(int arr[], int low, int high){
	int pivot = arr[high];
	int i = low-1;
	for(int j = low; j < high; j++){
		if(arr[j] < pivot){
			i++;
			swap(arr[i], arr[j]);
		}
	}
	i++;
	swap(arr[high], arr[i]);
	return i;
}

void quickSort(int arr[], int low, int high){
	if(low < high){
		int pivotIndex = partition(arr, low, high);
		quickSort(arr, low, pivotIndex-1);
		quickSort(arr, pivotIndex+1, high);
	}
}
int main() {

    int arr[10] = {2,4,1,6,9 ,9,9,9,9,9};
    int n = 10;

    quickSort(arr, 0, n-1);

    for(int i=0; i<n; i++) 
    {
        cout << arr[i] << " ";
    } cout << endl;


    return 0;
}