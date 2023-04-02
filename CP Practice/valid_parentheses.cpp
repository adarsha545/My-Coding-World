
bool isValidParenthesis(string expression)
{    stack<char>str;
     char c;
    for(int i=0;i<expression.length();i++){
        c=expression[i];
        if(c=='('|| c=='{'||c=='['){
            str.push(c);
        }
        else{
            if(!str.empty()){
                char a = str.top();
                if((c==')'&& a=='(')||(c=='}'&& a=='{')||(c==']'&& a=='['))
                str.pop();
            
                else
                return false;
            }
            else{
                return false;
            }
        }
    }
     if(str.empty()){
         return true;
     }
 else
     return false;
}
