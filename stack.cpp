#include <iostream>
using namespace std;

#define MAX 100 // Define the maximum size of the stack

class Stack {
private:
    int arr[MAX];
    int top;
public:
    Stack() { top = -1; }

    // Push an element onto the stack
    void push(int x) {
        if (top >= (MAX - 1)) {
            cout << "Stack Overflow" << endl;
            return;
        }
        arr[++top] = x;
        cout << x << " pushed to stack" << endl;
    }

    // Pop an element from the stack
    void pop() {
        if (top < 0) {
            cout << "Stack Underflow" << endl;
            return;
        }
        cout << arr[top--] << " popped from stack" << endl;
    }

    // Return the top element of the stack
    int peek() {
        if (top < 0) {
            cout << "Stack is Empty" << endl;
            return -1; // Indicate that the stack is empty
        }
        return arr[top];
    }

    // Check if the stack is empty
    bool isEmpty() {
        return (top < 0);
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << s.peek() << " is at the top of the stack" << endl;

    s.pop();
    s.pop();

    cout << s.peek() << " is at the top of the stack" << endl;

    s.pop();
    s.pop(); // Trying to pop from an empty stack

    return 0;
}
