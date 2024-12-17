// Functions
// (Assignment Questions)
// Question 1: Write a function to check if a number is a palindrome in C++. (121 is a palindrome, 321 is not)
// A number is called a palindrome if the number is equal to the reverse of a number.
// Eg: 121 is a palindrome because the reverse of 121 is 121 itself. On the other hand, 321 is not a palindrome because the reverse of 321 is 123, which is not equal to 321.
// Question 2: Write a function to calculate the sum of digits of a number.
// Question 3 : Write a function which takes 2 numbers as parameters (a & b) and outputs : a^2 + b*2 + 2*ab.
// Question 4: Write a function that prints the largest of 3 numbers.
// Question 5: Write a function that accepts a character (ch) as parameters & returns the character that occurs after ch in the English alphabet.
// Eg: input = 'c', return value = 'd'
// Note: for ch = 'z', return 'a'.





// checking palindrome number
// #include<iostream>
// using namespace std;
// bool palindrome(int n){
//     int temp = n;

//     int r;
//     int res=0;
//     while(n!=0){
//         r = n%10;
//         res = res*10+r;
//         n = n/10;
//     }

//     if(temp == res){
//         return true;
//     }
//     return false;
// }
// int main(){
//     int n;
//     cout<<"\n enter the number "<<endl;
//     cin>>n;

//     if(palindrome(n)){
//         cout<<"\n It is a palindrome number "<<endl;
//     }
//     else{
//         cout<<"\n It is not a palindrome number "<<endl;
//     }
//     return 0;
// }




// sum of digits of a number

// #include<iostream>
// using namespace std;
// int sum(int n){
//     int ad = 0;
//     int r;
//     while(n!=0){
//         r = n%10;
//         ad += r;
//         n = n/10;
//     }
//     return ad;
// }
// int main(){
//     int n;
//     cout<<"\n enter the number "<<endl;
//     cin>>n;

//     cout<<"\n sum of digits of a number is : "<<sum(n)<<endl;
//     return 0;
// }



// Last question

#include<iostream>
using namespace std;
void printing(char ch){

    if(ch == 'z'){
        cout<<'a'<<endl;
    }
    if(ch == 'Z'){
        cout<<'A'<<endl;
    }
    ch++;
    cout<<ch<<endl;
    
}
int main(){
    char ch;
    cout<<"\n enter the character "<<endl;
    cin>>ch;

    printing(ch);
    return 0;
}