// prime number checking
// #include<iostream>
// using namespace std;
// int main(){

//     int n;
//     cout<<"\n enter the number "<<endl;
//     cin>>n;

//     bool isprime = true;

//     for(int i=2;i<n;i++)
//     {
//         if(n%i==0)
//         {
//             isprime = false;
//             break;
//         }
//     }
//     if(isprime){
//         cout<<"\n It is a prime number "<<endl;
//     }
//     else{
//         cout<<"\n It is not a prime number "<<endl;
//     }
//     return 0;
// }



// optimized version of code

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"\n enter the number "<<endl;
//     cin>>n;

//     bool isprime = true;
//     for(int i=2;i<=sqrt(n);i++){
//         if(n%i==0){
//             isprime=false;
//             break;
//         }
//     }

//     if(isprime){
//         cout<<"\n It is a prime number "<<endl;
//     }
//     else{
//         cout<<"\n It is not a prime number "<<endl;
//     }
//     return 0;
// }


