//Stack Implementation using Linked List
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

class Stack {
    Node* top;

public:
    Stack() { top = nullptr; }

    void push(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = top;
        top = newNode;
        cout << value << " pushed into stack.\n";
    }

    void pop() {
        if (top == nullptr)
            cout << "Stack Underflow! Stack is empty.\n";
        else {
            cout << top->data << " popped from stack.\n";
            Node* temp = top;
            top = top->next;
            delete temp;
        }
    }

    void display() {
        if (top == nullptr)
            cout << "Stack is empty.\n";
        else {
            cout << "Stack elements (top to bottom): ";
            Node* temp = top;
            while (temp != nullptr) {
                cout << temp->data << " ";
                temp = temp->next;
            }
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

