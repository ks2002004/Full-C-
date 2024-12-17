// function in c++
// forward declaration in c++

// #include<iostream>
// using namespace std;
// void sayhello(); // it is a forward declaration concept which means before calling function we have to declare function with its name 
// int main(){
//     sayhello();
//     return 0;
// }

// void sayhello(){
//     cout<<"\n hello world :)"<<endl;
// }




// functions parameters

#include<iostream>
using namespace std;
int sum(int c,int d){
    return c+d;
}
int diff(int c,int d)
{
    return c-d;
}
int main()
{
    int a,b;
    cout<<"\n enter the two numbers "<<endl;
    cin>>a>>b;

    int add = sum(a,b);
    int diff1 = diff(a,b);

    cout<<"\n the sum is : "<<add<<endl;
    cout<<"\n the difference is : "<<diff1<<endl;
    return 0;
}