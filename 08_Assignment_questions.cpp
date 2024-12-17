// ques1

// Question 1: Write a C++ program to get a number from the user and print whether
// it's positive, negative or zero.


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"\n enter the number to check the conditions "<<endl;
//     cin>>n;

//     if(n>0){
//         cout<<"\n It is a positive number "<<endl;
//     }
//     else if(n<0){
//         cout<<"\n It is a negative number "<<endl;
//     }
//     else{
//         cout<<"\n This number is zero "<<endl;
//     }
//     return 0;
// }



// Question 2: Write a C++ program that takes a year from the user and print whether
// that year is a leap year or not.


// #include<iostream>
// using namespace std;
// int main(){
//     int year;
//     cout<<"\n enter the year to check whether it is a leap year or not ?";

//     cin>>year;

//     if(year%400 == 0){
//         cout<<"\n It is a leap year ";
//     }
//     else{
//         if(year%4==0 && year%100!=0){
//             cout<<"\n It is a leap year "<<endl;
//         }
//         else{
//             cout<<"\n It is not a leap year "<<endl;
//         }
//     }
//     return 0;
// }



// check whether a given number is armstrong number or not

// #include<iostream>
// using namespace std;
// int main(){
//     int n,temp,sum = 0,r;
//     cout<<"\n enter the number "<<endl;
//     cin>>n;

//     temp = n;
//     while(n>0){
//         r = n%10;
//         sum += (r*r*r);
//         n = n/10;
//     }

//     if(temp == sum){
//         cout<<"\n It is a armstrong number "<<endl;
//     }
//     else{
//         cout<<"\n It is not a armstrong number "<<endl;
//     }
//     return 0;
// }


// typedef

// typedef is a keyword and it is used to give new name to a type

// typedef int Length;
// Now you can use length as a data type which is same as a int ....

// Length x,y;

// yehan pr student naam ka ek typedef banaya like datatype..
// aur with the help of this I am accessing its variables...
// #include<iostream>
// using namespace std;
// typedef struct{
//     int rollno;
//     char name[20];
//     int age;
// }Student;

// int main()
// {   
//     Student s1;
//     s1.rollno = 2334;
//     strcpy(s1.name,"Kavya");
//     s1.age = 22;

//     cout<<s1.rollno<<" "<<s1.name<<" "<<s1.age<<endl;
//     return 0;
// }


// macro => It is a preprocessor directive that defines a name or function like macro that can be used throughout the code..

// It replace with the name of macro to the value of macro

// macro is defined by the #define preprocessor directive

// now for example we are calculating area of circle using macros...
// #include<iostream>

// using namespace std;
// #define PI 3.14
// #define square(r) ((r)*(r))
// int main(){

//     int r;
//     cout<<"\n enter the radius "<<endl;
//     cin>>r;

//     double area = PI * square(r);
//     cout<<"\n Area of the circle is : "<<area<<endl;
//     return 0;
// }