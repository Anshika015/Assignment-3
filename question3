#include <iostream>
#include<string>
using namespace std;
int main() {
    string exp;
    cout<<"enter expression";
    getline(cin,exp);
    char stack[100];
    int top=-1;
    for(int i=0;i<exp.length();i++){
        char ch=exp[i];
        if(ch=='{'||ch=='['||ch=='('){
            stack[++top]=ch;
        }
        else if(ch==')'||ch==']'||ch=='}'){
            if(top==-1){
                cout<<"not balanced";
                return 0;
            }
            char open=stack[top--];
            if((open=='('&& ch!=')')||(open=='['&& ch!=']')||(open=='{'&& ch!='}')){
                cout<<"not balanced";
                return 0;
            }
        }
    }
    if(top==-1) cout<<"balanced";
    else cout<<"not balanced";
   return 0;
}
