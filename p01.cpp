
#include <iostream>
#include <stack>   // header file for stack
using namespace std;

int main() {
    stack<int> s;  // create a stack of integers

    // push elements into stack
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.top() << endl; // shows top element (30)

    s.pop(); // remove top element

    cout << "After pop, top element: " << s.top() << endl;

    cout << "Size of stack: " << s.size() << endl;

    if (s.empty())
        cout << "Stack is empty" << endl;
    else
        cout << "Stack is not empty" << endl;

    return 0;
}

/*
output

Top element: 30
After pop, top element: 20
Size of stack: 2
Stack is not empty

*/

