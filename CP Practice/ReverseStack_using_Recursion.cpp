void push_bottom(stack<int>&s,int n){
        if(s.empty()){
            s.push(n);
            return;
        }
        int a=s.top();
        s.pop();
        push_bottom(s,n);
        s.push(a);
}
void solve(stack<int>&s){
   
    if(s.empty()){
        return;
        }
    int b=s.top();
    s.pop();
    solve(s);
    push_bottom(s,b);
}

void reverseStack(stack<int> &stack) {
solve(stack);

}