// Practice question

// #include<iostream>
// using namespace std;
// int main(){
//     int a = 10;
//     int *ptr = &a;

//     int b = 20;
//     int *ptr2 = &b;

//     ptr2 = ptr;
//     cout<<ptr<<" "<<ptr2<<" "<<&a<<endl;
//     cout<<*ptr<<" "<<*ptr2<<" "<<a<<endl;
//     return 0;
// }



// question 2

// #include<iostream>
// using namespace std;
// int main(){
//     // float *a,b;
//     // so here float *a is float pointer and float b is a kind of variable ...


//     // int *ptr = 0 == NULL;
//     int *ptr = 0;
//     cout<<ptr<<endl;
//     return 0;
// }





// ques3

#include<iostream>
using namespace std;
int main(){
    int a = 32;
    int *ptr = &a;

    char ch = 'A';
    char &cho = ch;

    cho+=a;
    *ptr += ch;
    cout<<a<<" , "<<ch<<endl;
    return 0;
}