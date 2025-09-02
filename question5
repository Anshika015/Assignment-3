#include <iostream>
using namespace std;

#define SIZE 100

int stackArr[SIZE];
int top = -1;

void push(int x) {
    if(top < SIZE - 1) {
        stackArr[++top] = x;
    }
}

int pop() {
    if(top >= 0) {
        return stackArr[top--];
    }
    return -1;
}

int main() {
    char postfix[SIZE];
    cout << "Enter postfix expression (single-digit operands): ";
    cin >> postfix;

    for(int i = 0; postfix[i] != '\0'; i++) {
        char c = postfix[i];
        if(c >= '0' && c <= '9') {
            push(c - '0');  
        }
        else {
            
            int val2 = pop();
            int val1 = pop();
            int result;

            switch(c) {
                case '+': result = val1 + val2; break;
                case '-': result = val1 - val2; break;
                case '*': result = val1 * val2; break;
                case '/':
                if (b == 0) { cout << "Error: division by zero\n"; return 1; }
                r = a / b;                // correct order: a divided by b
                break;
            case '%':
                if (b == 0) { cout << "Error: modulo by zero\n"; return 1; }
                r = a % b; 
                break;
                case '^': {
                    result = 1;
                    for(int k = 0; k < val2; k++) result *= val1;
                    break;
                }
                default: result = 0;
            }
            push(result);
        }
    }

    cout << "Result = " << pop() << endl;
    return 0;
}
