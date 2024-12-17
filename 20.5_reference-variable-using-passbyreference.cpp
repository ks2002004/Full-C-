// pass by reference using reference variable
// reference variable is an alternate name(alias) of already existing variable .

// int a = 5;
// int &b = a;
// matlab a ka naya naam b create kardiya

// a & b refer to same location in the memory..

// #include<iostream>
// using namespace std;
// int main(){

//     int a = 10;
//     int &b = a;
//     b = 100;
//     cout<<b<<endl;
//     cout<<a<<endl;
//     return 0;
// }




// #include<iostream>
// using namespace std;
// void changeA(int &param){ // a ka alias create kardiya &param naam se jo ki same memory ko refer kar rahe hain .. .

// param = 50;
// cout<<param<<endl;

// }
// int main(){

//     int a = 10;

//     changeA(a);

//     cout<<"\n Updated value of a is through main function "<<a<<endl;

//     return 0;
// }