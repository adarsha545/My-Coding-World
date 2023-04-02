#include <bits/stdc++.h> 
void sort(stack<int>&s,int x){
    if(s.empty() || s.top()<x){
        s.push(x);
        return;
    }
    int a=s.top();
    s.pop();
    sort(s,x);
    s.push(a);
  
}

void sortStack(stack<int> &s)
{
	if(s.empty()){
        return;
    } 
    int a=s.top();
    s.pop();
    sortStack(s);
    sort(s,a);
       
}