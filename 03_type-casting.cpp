// type casting
// Converting data from one type to another type

// small size ka data apne aap convert hojaata hai big data ke size main usse implicit type conversion kehte hain

// conversion
// #include<iostream>
// using namespace std;
// int main(){
//     char grade = 'A';
//     int value  = grade;
//     cout<<grade<<" "<<value<<endl;
//     cout<<sizeof(grade)<<" "<<sizeof(value)<<endl;
//     return 0;
// }


// casting 
// casting means when we convert big data type data to small data type data

#include<iostream>
using namespace std;
int main(){
    double price = 123.456;
    int price1 = (int)price;
    cout<<price1<<" "<<sizeof(price1)<<endl;
    return 0;
}

