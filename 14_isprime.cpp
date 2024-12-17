// wap to check whether a given number is prime number or not 

#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"\n enter the number "<<endl;
    cin>>n;
    bool isprime = true;
    for(int i=2;i<n;i++){
        if(n%i==0){
            isprime=false;
            break;
        }
    }

    if(isprime){
        cout<<"\n It is a prime number\n";
    }
    else{
        cout<<"\n It is not a prime number ";
    }
    cout<<"\n execution of the program completes "<<endl;
    return 0;
}