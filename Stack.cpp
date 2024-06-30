#include <iostream>
#include <vector>
using namespace std;

class Stack {
private:
    vector<int> stack; // Using a vector to store stack elements

public:
    // Function to add an element to the stack
    void push(int x) {
        stack.push_back(x);
    }

    // Function to remove the top element from the stack
    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow" << endl;
            return;
        }
        stack.pop_back();
    }

    // Function to return the top element of the stack
    int top() {
        if (isEmpty()) {
            cout << "Stack is Empty" << endl;
            return -1;
        }
        return stack.back();
    }

    // Function to check if the stack is empty
    bool isEmpty() {
        return stack.empty();
    }

    // Function to return the size of the stack
    int size() {
        return stack.size();
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element is: " << s.top() << endl;  // Output: 30
    cout << "Stack size is: " << s.size() << endl; // Output: 3

    s.pop();
    cout << "Top element after pop is: " << s.top() << endl;  // Output: 20
    cout << "Stack size after pop is: " << s.size() << endl; // Output: 2

    return 0;
}
