// print all primes in a range from 2 to n

// #include<iostream>
// using namespace std;
// bool isprime(int n){
//     for(int i=2;i*i<=n;i++){
//         if(n%i==0){
//             return false;
//         }
//     }
//     return true;
// }

// void printing(int n){
//     for(int i=2;i<=n;i++){
//         if(isprime(i)){
//             cout<<i<<" ";
//         }
//     }
//     cout<<endl;
// }
// int main(){
//     int n;
//     cout<<"\n enter the number "<<endl;
//     cin>>n;
//     printing(n);



//     return 0;
// }


// revision of the above problem .... 


// #include<iostream>
// using namespace std;
// bool isprime(int n)
// {
//     if(n==1){
//         return false;
//     }
//     for(int i=2;i*i<=n;i++){
//         if(n%i==0){
//             return false;
//         }
//     }
//     return true;
// }

// void printing(int n){
//     for(int i=2;i<=n;i++){
//         if(isprime(i)){
//             cout<<i<<" ";
//         }
//     }
//     cout<<endl;
// }
// int main(){
//     int n;
//     cout<<"\n enter the number "<<endl;
//     cin>>n;

//     printing(n);

//     cout<<"\n Printing above all prime number above "<<endl;

//     return 0;
// }