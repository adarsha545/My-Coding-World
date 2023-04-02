#include<bits/stdc++.h>
#include<stack>
using namespace std;
//class Solution {
//public:
    void reverseOnlyLetters(string s) {
        stack<char>str;
        string a = "";
        for(int i=0;i<s.length();i++){
            str.push(s[i]);
        }
        while(!str.empty()){
           a = str.top();
           cout << a;
           str.pop();

        }
       // return a;
    }
//};

int main(){
    string str = "a-bC-dEf-ghIj";
    reverseOnlyLetters(str);
    return 0;
}
