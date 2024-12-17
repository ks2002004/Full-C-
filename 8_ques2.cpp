// write a program of switch case for +,-,*,/

#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"\n enter the character "<<endl;
    cin>>ch;
    int a,b;
    cout<<"\n enter two numbers "<<endl;
    cin>>a>>b;

    switch(ch){
        case '+':
        cout<<a+b<<endl;
        break;

        case '-':
        cout<<a-b<<endl;
        break;

        case '*':
        cout<<a*b<<endl;
        break;

        case '/':
        cout<<a/b<<endl;
        break;

        default:
        cout<<"\n enter valid case, now you have entered invalid case "<<endl;

    }
    return 0;
}