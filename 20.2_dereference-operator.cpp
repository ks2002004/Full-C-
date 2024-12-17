// Dereference operator in c++

#include<iostream>
using namespace std;
int main(){
    int a = 10;
    cout<<"\n Address of a is "<<&a<<endl;
    cout<<"\n Value of a is : "<<*(&a)<<endl;
    // Above is dereferencing of the addresss....

    int *ptr = &a;
    cout<<"Adress of a is : "<<ptr<<endl;
    cout<<"\n Value of a is "<<*ptr<<endl;

    // we can change the value of a through pointer also

    *ptr = 20;
    cout<<"Updated value of a is : "<<a<<endl;
    return 0;
}