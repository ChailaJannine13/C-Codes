
/* C++ implementation to convert
infix expression to postfix*/
 
#include <bits/stdc++.h>
using namespace std;
 
 
// Function to return precedence of operators
int precedence(char Opperand)
{
    if (Opperand == '^')
        return 3;
    else if (Opperand == '/' || Opperand == '*')
        return 2;
    else if (Opperand == '+' || Opperand == '-')
        return 1;
    else
        return -1;
}
 
// The main function to convert infix expression
// to postfix expression
void convert(string infix)
{
 
    stack<char> st; // For stack operations, we are using
                    // C++ built in stack
    string result;
 
    for (int i = 0; i < infix.length(); i++) {
        char Opperand = infix[i];
 
        // If the scanned character is
        // an operand, add it to output string.
        if ((Opperand >= 'a' && Opperand <= 'z') || (Opperand >= 'A' && Opperand <= 'Z')
            || (Opperand >= '0' && Opperand <= '9'))
            result += Opperand;
 
        // If the scanned character is an
        // ‘(‘, push it to the stack.
        else if (Opperand == '(')
            st.push('(');
 
        // If the scanned character is an ‘)’,
        // pop and to output string from the stack
        // until an ‘(‘ is encountered.
        else if (Opperand == ')') {
            while (st.top() != '(') {
                result += st.top();
                st.pop();
            }
            st.pop();
        }
 
        // If an operator is scanned
        else {
            while (!st.empty()
                   && precedence(infix[i]) <= precedence(st.top())) {
                result += st.top();
                st.pop();
            }
            st.push(Opperand);
        }
    }
 
    // Pop all the remaining elements from the stack
    while (!st.empty()) {
        result += st.top();
        st.pop();
    }
 
    cout << result << endl;
}
 
// Driver'infix code
int main()
{
    string expression = "";
    cout<<"Enter an infix/prefix expression : ";
    cin>>expression;
 
    // Function call
    convert(expression);
    return 0;
}
