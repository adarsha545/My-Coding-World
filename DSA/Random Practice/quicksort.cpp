#include<iostream>
#include<bits/stdc++.h>
using namespace std;


/*int partition( int arr[], int s, int e) {

    int pivot = arr[s];

    int cnt = 0;
    for(int i = s+1; i<=e; i++) {
        if(arr[i] <=pivot) {
            cnt++;
        }
    }

    //place pivot at right position
    int pivotIndex = s + cnt;
    swap(arr[pivotIndex], arr[s]);

    //left and right wala part smbhal lete h 
    int i = s, j = e;

    while(i < pivotIndex && j > pivotIndex) {

        while(arr[i] <= pivot) 
        {
            i++;
        }

        while(arr[j] > pivot) {
            j--;
        }

        if(i < pivotIndex && j > pivotIndex) {
            swap(arr[i++], arr[j--]);
        }

    }

    return pivotIndex;

}

void quickSort(int arr[], int s, int e) {

    //base case
    if(s >= e) 
        return ;

    //partitioon karenfe
    int p = partition(arr, s, e);

    //left part sort karo
    quickSort(arr, s, p-1);

    //right wala part sort karo
    quickSort(arr, p+1, e);

}*/

/*void countSort(int arr[], int n){
	int max_element = INT_MIN;
	for(int i = 0; i < n; i++){
		if(arr[i] > max_element){
			max_element = arr[i];
		}
	}
	int helper[max_element + 1];
	for(int i = 0; i < max_element+1; i++){
		helper[i] = 0;
	}
	for(int i = 0; i < n; i++){
		helper[arr[i]]++;
	}
	int index = 0;
	for(int i = 0; i < max_element+1; i++){
		while(helper[i] > 0){
			arr[index++] = i;
			helper[i]--;
		}
	}
	//cout<<"The sorted array will look like: ";
	//print(arr, n);
}*/
void heapify(int arr[], int n, int i){
	int largest = i;
	int left = 2*i + 1;
	int right = 2*i + 2;

	if(left < n && arr[left] > arr[largest]){
		largest = left;
	}
	if(right < n && arr[right] > arr[largest]){
		largest = right;
	}
	if(i != largest){
		swap(arr[i],arr[largest]);
		heapify(arr,n,largest);
	}
}
	
void heapSort(int arr[], int n){
	for(int i = n/2 - 1; i >= 0; i--){
		heapify(arr, n, i);
	}
	for(int i = n-1; i >= 0; i--){
		swap(arr[i],arr[0]);
		heapify(arr, i, 0);
	}
	cout<<"The sorted array will look like: ";
	//print(arr, n);
}

int main() {

    int arr[18] = {5,2,1,4,2,3,8,7,6,4,5,2,1,3,4,8,0,1};
    int n = 18;

    //quickSort(arr, 0, n-1);
    //countSort(arr,n);
    heapSort(arr,18);

    for(int i=0; i<n; i++) 
    {
        cout << arr[i] << " ";
    } cout << endl;


    return 0;
}