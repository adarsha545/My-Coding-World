#include<iostream>
using namespace std;

//Tower Of Hanoi Function
int TOH(int n){
    if(n==0){
        return 0;
    }
    return TOH(n-1)+1+TOH(n-1);
}

//Printing the steps of TOH
void Print_steps(int n,char src,char des,char help){
    if(n==0){
        return;
    }
    Print_steps(n-1,src,help,des);
    cout<<"Moving Disk "<<n<<" from "<<src<<"->"<<des<<endl;
    Print_steps(n-1,help,des,src);

}



int main(){
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
   int a = TOH(n);
   cout<<"Number of Steps: "<<a<<endl;
    Print_steps(n,'A','C','B');
    cout<<"Number of Steps: "<<a<<endl;

return 0;
}