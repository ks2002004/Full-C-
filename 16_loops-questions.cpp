// wap to print sum of all numbers from 1 to N which are divisibe by 3

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"\n enter the number "<<endl;
//     cin>>n;

//     int sum = 0;
//     for(int i=1;i<=n;i++){
//         if(i%3==0){
//             sum+=i;
//         }

//     }
//     cout<<"\n The sum of numbers from 1 to N are : "<<sum<<endl;
// }


// Print factorial of a number n 

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"\n enter the number ";
//     cin>>n;

//     int fact = 1;
//     for(int i=1;i<=n;i++){
//         fact*=i;
//     }
//     cout<<"\n The factorial of a number is : "<<fact<<endl;
//     return 0;
// }



// loops assignment questions 

// print the sum of number of digits using loop

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"\n enter the number ";
//     cin>>n;
//     int r;
//     int sum = 0;
//     while(n>0){
//         r = n%10;
//         sum+=r;
//         n/=10;
//     }
//     cout<<"\n The sum of the digits of the number are : "<<sum<<endl;

//     return 0;
// }



// print the sum of odd numbers from  1 to N


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"\n enter the number "<<endl;
//     cin>>n;

//     int sum = 0;
//     for(int i=0;i<n;i+=2){
//         sum += i;
//     }
//     cout<<"\n The sum of odd digits in a given number are : "<<sum<<endl;
//     return 0;
// }


// print the digits of odd digit of a given number

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"\n enter the number "<<endl;
//     cin>>n;
//     int digit;
//     int sum = 0;
//     while(n!=0){
//         digit = n%10;
//         if(digit%2!=0){
//             sum += digit;
//         }
//         // removing the last digit

//         n /= 10;
//     }

//     cout<<"\n the sum of odd digits of a given number is : "<<sum<<endl;
//     return 0;
// }




// print the digits of a given number in reverse using while loop

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"\n enter the number "<<endl;
//     cin>>n;

//     int r;
//     while(n!=0){
//         r = n%10;
//         cout<<r;
//         n=n/10;
//     }
//     cout<<endl;
//     return 0;
// }


// isme aur upar vaale question main yeh difference hai ki upar vaale main hr ek digit alag karke reverse kar rahe hain but isme ek saath reverse ka result kisi main store kara rahe hain.....


// reverse the given number and print the result

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"\n enter the given number "<<endl;
//     cin>>n;
//     int r,res=0;
//     while(n!=0){
//         r = n%10;
//         res = res*10+r;
//         n=n/10;
//     }
//     cout<<res<<endl;
//     return 0;
// }







