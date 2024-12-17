// Null Pointer => We assign null value to the pointer to show it does'nt point to any location

// int *ptr = NULL; iska matlab yeh hai ki yeh kisi memory address ko point nahin kar raha 

#include<iostream>
using namespace std;
int main(){

    // int *ptr;
    // cout<<ptr<<endl;

    int *ptr = NULL;
    cout<<ptr<<endl;

    // kabhi bhi null pointer ko derefernce nahin karna segmentation fault error aajaega ...
    cout<<*ptr<<endl;
    return 0;
}