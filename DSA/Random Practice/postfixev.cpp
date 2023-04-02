#include <cmath>
#include <iostream>
#include <stack>
using namespace std;

// function to calculate with respect to current incoming operator
int simpleCalculator(int a, int b, int op) {
  // switch the operator
  switch (op) {
  case '+':
    return a + b;
  case '-':
    return a - b;
  case '*':
    return a * b;
  case '/':
    return a / b;
  case '^':
    return pow(a, b);
  }
}

// function to evaluate the postfix expression
int postfixEvaluator(string postfix) {
  // create a stack of int data-type from C++ library
  stack<int> st;
  int answer = 0;
  // Now iterate over all of the characters of the string
  for (int i = 0; i < postfix.length(); i++) {
    // if a charcter is in between 0-9 then add it to the stack
    if (postfix[i] >= '0' && postfix[i] <= '9') {
      st.push(postfix[i] - '0');
    }
    // if we encounter some operator then we should pop two stack top elements
    // and evaluate them with the current operator
    else {
      int op2 = st.top();
      st.pop();
      int op1 = st.top();
      st.pop();
      // we directly now push the current evaluated value to the stack
      st.push(simpleCalculator(op1, op2, postfix[i]));
    }
  }
  // finally we get our final answer as stack top value
  return st.top();
}

int main() {
  string postfix_expression;
  cout << "Enter the postfix expression: ";
  cin >> postfix_expression;
  cout << "Evaluated value for this postfix expression: "
       << postfixEvaluator(postfix_expression) << endl;
}