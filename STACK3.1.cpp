#include<iostream>
#include<stack>
using namespace std;
int main()
{
    int n = 0;
    cout<<"Enter a Number to be Reversed : ";
    cin>>n;
    // declaring the empty stack
    stack<int> st;

    // pushing the digits into the stack
    while (n > 0)
    {
        st.push(n % 10);
        n /= 10;
    }
    // we will store the reverse number into this variable
    int ans = 0;

    // intializing to multiply with the power of 10
    int i = 1;
    // now start popping from the
    // stack, until stack becomes empty
    while (!st.empty())
    {
        int val = st.top();
        st.pop();
        ans = ans + val * i;
        i = i * 10;
    }
    // printing the reverse number
    cout << "Reversed Number: " << ans << endl;
}
