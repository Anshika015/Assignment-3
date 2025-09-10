#include <iostream>
using namespace std;

#define MAX 100   // maximum size of stack

class Stack {
    char arr[MAX];
    int top;

public:
    Stack() { top = -1; }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == MAX - 1;
    }

    void push(char ch) {
        if (isFull()) {
            cout << "Stack Overflow!\n";
        } else {
            arr[++top] = ch;
        }
    }

    char pop() {
        if (isEmpty()) {
            cout << "Stack Underflow!\n";
            return '\0';
        } else {
            return arr[top--];
        }
    }
};

int main() {
    string str = "DataStructure";
    Stack s;

    // push all characters
    for (int i = 0; i < str.length(); i++) {
        s.push(str[i]);
    }

    // pop to build reversed string
    string rev = "";
    while (!s.isEmpty()) {
        rev += s.pop();
    }

    cout << "Original: " << str << endl;
    cout << "Reversed: " << rev << endl;

    return 0;
}
