#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int get_max(int arr[], int n){
	int max_element = INT_MIN;
	for(int i = 0; i < n; i++){
		max_element = max(max_element, arr[i]);
	}
	return max_element;
}
void countSortForRadix(int arr[], int n, int pos){
	int output[n];
	int count[10];
	//Initialize the whole array with 0
	for(int i = 0; i < 10; i++){
		count[i] = 0;
	}
	//Digit extraction and store it
	for(int i = 0; i < n; i++){
		count[(arr[i]/pos)%10]++;
	}
	//Cumulative Sum 
	for(int i = 1; i < 10; i++){
		count[i] += count[i-1];
	}
	//Output Array Store for stable sort we are going backward
	for(int i = n-1; i >= 0; i--){
		output[--count[(arr[i]/pos)%10]] = arr[i];
	}
	//Now copy the output array to main array
	for(int i = 0; i < n; i++){
		arr[i] = output[i];
	}
}
void radixSort(int arr[], int n){
	int maximum = get_max(arr, n);
	for(int pos = 1; maximum/pos > 0; pos*=10){
		countSortForRadix(arr,n,pos);
	}
	//print(arr, n);
}


int main() {

    int arr[18] = {5,2,1,4,2,3,8,7,6,4,5,2,1,3,4,8,0,1};
    int n = 18;

    //quickSort(arr, 0, n-1);
    //countSort(arr,n);
    radixSort(arr,18);

    for(int i=0; i<n; i++) 
    {
        cout << arr[i] << " ";
    } cout << endl;


    return 0;
}