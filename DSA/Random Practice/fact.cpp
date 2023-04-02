#include <iostream>
using namespace std;
int factorial(int n, int a){
	if(n==0 || n==1){
		return a;
	}
	return factorial(n-1,n*a);
}
int fibonacci(int n, int a, int b){
	if(n == 0){
		return a;
	}
	if(n == 1){
		return b;
	}
	return fibonacci(n-1,b,a+b);
}
int main(){
	cout<<factorial(5,2)<<endl;
	// cout<<fibonacci(5,0,1)<<endl;
	for(int i = 0; i <= 5; i++){
		cout<<fibonacci(i,0,1)<<" ";
	}
	cout<<endl;
	return 0;
}