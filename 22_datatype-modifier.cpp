// Data type Modifier in C++
// Data Type Modifiers
// Alter the meaning of existing data types.
// long
// >= 4 bytes (more than int)
// short
// 2 bytes
// signed
// signed int is same as int
// unsigned
// can only store non-negative numbers
// long long
// same as long long int



#include<iostream>
using namespace std;
int main(){
    cout<<sizeof(int)<<endl;
    cout<<sizeof(double)<<endl;
    cout<<sizeof(long int)<<endl;
    cout<<sizeof(long double)<<endl;
    cout<<sizeof(short int)<<endl;
    // greater than long int

    cout<<sizeof(long long)<<endl;
    return 0;
}