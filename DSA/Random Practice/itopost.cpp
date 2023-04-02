#include <bits/stdc++.h>
using namespace std;

int precedence(char ch){
    switch(ch){
		//If the operator is Plus or Minus
        case '-':
        case '+':
            return 1;
		//If the operator is Multiplier or Divider
        case '*':
        case '/':
            return 2;
		//If the operator is a Power
		case '^':
			return 3;
        default:
            return -1;
    }
}
bool isOperand(char ch){
	// If the character is an operand return true otherwise return false
    return (ch>='a' && ch<='z') || (ch>='A' && ch <='Z' || (ch>='0' && ch<='9'));
}
// Function to convert infix to postfix expression
string infixToPostfix(string infix){
	// n = length of the infix expression
    int n=infix.length();
	//we are using inbuilt stack library of char datatype
    stack<char> st;
	//this is the main string where we store our answer
    string postfix;
	//now iterate all over the infix expression 
    for(int i=0;i<n;i++){
        if(isOperand(infix[i])){
            //step 2 -> if it is an operand directly push it to the postfix string
            postfix.push_back(infix[i]);
        }
        else if(infix[i] == '('){
            //step 3 -> if it is opening bracket just push it to the postfix string
            st.push('(');
        }
        else if(infix[i] == ')'){
            //step 4 -> if we encounter an closing bracket then just pop all the elements
			// & push it to the main answer string until we reach to the opening bracket
            while( st.top() != '(' ){
                postfix.push_back(st.top());
                st.pop();
            }
			// Now throw '(' out of the stack
            st.pop();
            
        }
        else{
            // step 5 -> if the precedence of the incoming character is lesser than the stack
			// top character then first pop the stack top character and add it to the postfix
			// string. Do this until incoming operator precedence is greater than the stack top
			// operator. (Fun remembrance 😉: Toppers always take the top position in the class)
            while(!st.empty() && st.top() != '(' && precedence(st.top()) >= precedence(infix[i])){
                postfix.push_back(st.top());
                st.pop();
            }
			// pushing the incoming operator finally to the stack
            st.push(infix[i]);
        }
    }
    // Now finally add all rest elements into the postfix string until stack gets empty
    while(!st.empty()){
        postfix.push_back(st.top());
        st.pop();
    }
    return postfix;
}

int main() {
	// main driver code for this operation
    string infix;
	cout<<"Enter the infix expression: ";
	cin>>infix;
    string postfix=infixToPostfix(infix);
    cout<<"Infix expression : "<<infix<<endl; 
    cout<<"Postfix expression : "<<postfix<<endl;
    return 0;
}