#include <iostream>
using namespace std;

#define SIZE 100

char stackArr[SIZE];
int top = -1;

void push(char c) {
    if(top < SIZE - 1) {
        stackArr[++top] = c;
    }
}

char pop() {
    if(top >= 0) {
        return stackArr[top--];
    }
    return '\0';
}

char peek() {
    if(top >= 0) return stackArr[top];
    return '\0';
}

int precedence(char op) {
    if(op == '^') return 3;
    if(op == '*' || op == '/') return 2;
    if(op == '+' || op == '-') return 1;
    return -1;
}

int main() {
    char infix[SIZE], postfix[SIZE];
    int i, j = 0;

    cout << "Enter infix expression: ";
    cin >> infix;

    for(i = 0; infix[i] != '\0'; i++) {
        char c = infix[i];
        if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')) {
            postfix[j++] = c;
        }
        else if(c == '(') {
            push(c);
        }
        else if(c == ')') {
            while(top != -1 && peek() != '(') {
                postfix[j++] = pop();
            }
            pop(); 
        }
        else { 
            while(top != -1 && precedence(peek()) >= precedence(c)) {
                postfix[j++] = pop();
            }
            push(c);
        }
    }
    while(top != -1) {
        postfix[j++] = pop();
    }

    postfix[j] = '\0';

    cout << "Postfix expression: " << postfix << endl;

    return 0;
}
