// program a stack to demonstrate push, pop, and display operations.
#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;  // create a stack of integers
    int choice, value;

    while (true) {
        cout << "\n--- Stack Menu ---";
        cout << "\n1. Push";
        cout << "\n2. Pop";
        cout << "\n3. Top";
        cout << "\n4. Display";
        cout << "\n5. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                s.push(value);
                cout << value << " pushed onto stack.\n";
                break;

            case 2:
                if (!s.empty()) {
                    cout << s.top() << " popped from stack.\n";
                    s.pop();
                } else {
                    cout << "Stack is empty.\n";
                }
                break;

            case 3:
                if (!s.empty()) {
                    cout << "Top element: " << s.top() << endl;
                } else {
                    cout << "Stack is empty.\n";
                }
                break;

            case 4:
                if (!s.empty()) {
                    stack<int> temp = s;
                    cout << "Stack elements (top to bottom): ";
                    while (!temp.empty()) {
                        cout << temp.top() << " ";
                        temp.pop();
                    }
                    cout << endl;
                } else {
                    cout << "Stack is empty.\n";
                }
                break;

            case 5:
                cout << "Exiting program...\n";
                return 0;

            default:
                cout << "Invalid choice. Try again.\n";
        }
    }
}

