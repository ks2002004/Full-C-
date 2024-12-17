// pointers => It is a special variable that stores address of another variable .


#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int *ptr = &a;

    float pi = 3.14;
    float *ptr2 = &pi;
    cout<<"\n Address of a is : "<<&a<<"  = "<<ptr<<endl;
    cout<<"\n Address of pi is : "<<&pi<<" = "<<ptr2<<endl;

    // pointers to pointers => which stores the address of another pointer variable 

    int **ptr3 = &ptr;
    cout<<"\n Address of ptr is "<<&ptr<<" = "<<ptr3<<endl;
    return 0;
}