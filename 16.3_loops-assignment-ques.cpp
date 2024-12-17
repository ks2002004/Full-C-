// Question 1: WAP to find the Factorial of a number entered by the user.
// Hint: factorial of a number (n) = n * (n-1) * (n-2) * (n-3) * ...... * 1
// and exists for positive numbers only. We write factorial as n!
// So, factorial of 0! = 1, 1! = 1, 2! = 2, 3! = 6, 4! = 24 and so on.
// Note - Please do not confuse factorial with NOT EQUAL TO operator, they are not the same.



// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"\n enter the number "<<endl;
//     cin>>n;

//     int fact=1;

//     for(int i=1;i<=n;i++)
//     {
//         fact=fact*i;
//     }
//     cout<<"\n The factorial of a number is : "<<fact<<endl;
//     return 0;
// }



// WAP to print the multiplication table of a number, entered by the user.


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"\n enter the number "<<endl;
//     cin>>n;

//     cout<<"\n Multiplication Table of "<<n<<" : "<<endl;
//     for(int i=1;i<=10;i++)
//     {
//         cout<<n<<" * "<<i<<" = "<<n*i<<endl;

//     }
//     cout<<endl;
//     return 0;
// }


// Question 3 : WAP to input a number and check whether the number is an Armstrong
// number or not.



// #include<iostream>
// #include<cmath>
// using namespace std;
// int main(){
//     int n;
//     cout<<"\n enter the number to check whether it is armstrong number or not "<<endl;
//     cin>>n;

//     int temp=n;
//     int r;
//     int sum=0;
//     while(n!=0){
//         r = n % 10;
//         sum = sum + pow(r,3);
//         n=n/10;
//     }

//     if(temp == sum){
//         cout<<"\n It is a Armstrong number "<<endl;
//     }
//     else{
//         cout<<"\n It is not a armstrong number "<<endl;
//     }
//     return 0;
// }


// Question 5: For a positive N, WAP that prints the first N Fibonacci numbers.
// (Assume N >= 2)
// Fibonacci series : 0, 1, 1, 2, 3, 5, 8, 13, 21, 34 ....
// This is a series where each number is a sum of previous 2 numbers in the series.


// fibonnacci series number

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"\n enter the number "<<endl;
//     cin>>n;

//     int first=0,second=1;
//     cout<<first<<" "<<second<<" ";
//     for(int i=2;i<n;i++){
//         int third = first + second;
//         cout<<third<<" ";
//         first = second;
//         second = third;
//     }
//     cout<<endl;
//     return 0;
// }