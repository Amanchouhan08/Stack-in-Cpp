//Stack Program using Array.
#include <iostream>
using namespace std;

#define SIZE 5  // maximum size of stack

class Stack {
    int arr[SIZE];
    int top;
public:
    Stack() {
        top = -1; // stack is empty
    }

    void push(int value) {
        if (top == SIZE - 1)
            cout << "Stack Overflow! Cannot push " << value << endl;
        else {
            top++;
            arr[top] = value;
            cout << value << " pushed into stack.\n";
        }
    }

    void pop() {
        if (top == -1)
            cout << "Stack Underflow! Stack is empty.\n";
        else {
            cout << arr[top] << " popped from stack.\n";
            top--;
        }
    }

    void display() {
        if (top == -1)
            cout << "Stack is empty.\n";
        else {
            cout << "Stack elements (top to bottom): ";
            for (int i = top; i >= 0; i--)
                cout << arr[i] << " ";
            cout << endl;
        }
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    s.pop();
    s.display();

    return 0;
}

/*
output

10 pushed into stack.
20 pushed into stack.
30 pushed into stack.
Stack elements (top to bottom): 30 20 10 
30 popped from stack.
Stack elements (top to bottom): 20 10

*/

