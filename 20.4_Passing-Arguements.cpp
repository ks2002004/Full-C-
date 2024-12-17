// Passing arguements => through by pass by value and pass by reference 

// #include<iostream>
// using namespace std;
// pass by value main main function se actual arguement ki copy pass hoti hai toh changes actual arguement main reflect nahin hote

// void changeA(int a){
//     a = 20;
//     cout<<a<<endl;
// }
// int main(){
//     int a = 10;
//     cout<<"\n Through main function the value of a is : "<<a<<endl;

//     changeA(a);
//     cout<<"\n Updated value of a is : "<<a<<endl;
//     return 0;
// }





// pass by reference using pointer

#include<iostream>
using namespace std;
void changeA(int *ptr){
    *ptr = 200;
    // through derefernce pointer we have changed the value of the variable ...
    
}
int main(){
    int a = 10;
    cout<<a<<endl;

    changeA(&a);
    cout<<"\n Updated value of a is : "<<a<<endl;
    return 0;
}

