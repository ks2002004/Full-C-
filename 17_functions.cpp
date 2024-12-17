// functions in c++
// It is a block of code which runs when it is called .

// returntype fname(){
//     // do some work
//     return somevalue; // optional
// }

// fname(); it is a function call....


// #include<iostream>
// using namespace std;
// void sayhello(){
//     cout<<"\n Hello world :)"<<endl;
// }
// int main(){
//     sayhello();
//     return 0;
// }


#include<iostream>
using namespace std;
void sayhello(){
    cout<<"\n hello world :) "<<endl;
}
void assistant(){
    sayhello();
    cout<<"\n work done "<<endl;
}
int main(){
    assistant();
    
    return 0;
}