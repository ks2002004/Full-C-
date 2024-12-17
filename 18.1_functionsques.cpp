// write a function to check a a given number is prime number or not

#include<iostream>
using namespace std;
// bool ischeck(int num){
//     // bool isprime = true;
//     if(num == 1){
//         return false;
//     }
//     for(int i=2;i<num;i++){
//         if(num%i==0){
//             // isprime = false;
//            return false;
//         }
//     }
//     return true;

// }

bool ischeck2(int num){
    if(num == 1){
        return false;
    }

    for(int i=2;i*i<num;i++){
        // yahan pr condition dete samay i*i isliye kara hai kyunki i<sqqrt(n) ko humne i*i<n krdia means dono taraf square leliya .... 

        if(num%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cout<<"\n enter the number "<<endl;
    cin>>n;

    if(ischeck2(n)){
        cout<<"\n It is a prime number "<<endl;
    }
    else{
        cout<<"\n It is not a prime number "<<endl;
    }

    return 0;
}