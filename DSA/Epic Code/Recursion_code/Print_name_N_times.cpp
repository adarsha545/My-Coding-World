#include<iostream>
using namespace std;
//T.C=O(n)
//S.C=O(n)
void print(int i,int n){
    if(i>n)
    return;
    cout<<"Come On Adarsha !!"<<endl;
    print(i+1,n);

}

int main(){
    int n;
    cout<<"Enter number :"<<endl;
    cin>>n;
    print(1,n);
    return 0;

}