// WAF to find the binomial cofficient for a given n & r.

// nCr = n!/r!(n-r)!


// agar mujhe  itne main se itne cheeze pickup krne hoti hai toh main binomial cofficient ka use karunga ...
// for example 4 subjects main se 2 subjects pickup karne hain...

#include<iostream>
using namespace std;
int factorial(int n){
    int fac = 1;
    for(int i=1;i<=n;i++){
        fac*=i;
    }
    return fac;
}
int bincoff(int n,int r){
    int val1 = factorial(n);
    int val2 = factorial(r);
    int val3 = factorial(n-r);

    int res = val1/(val2 * val3);
    return res;

}
int main(){
    // cout<<"\n Binary coffient is : "<<bincoff(4,2)<<endl;
    cout<<"\n Binary coffient is : "<<bincoff(3,2)<<endl;

    cout<<"\n It means out of 4 things we can select only 2 things so the res is 6 which means there are 6 choices to select  "<<endl;
    return 0;
}
