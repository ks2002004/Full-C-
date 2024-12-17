// Character pyramid pattern in c++

// A 
// BC
// DEF
// GHIJ


#include<iostream>
using namespace std;
int main(){
    int n = 4;
    char ch;
    cin>>ch;

    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
    return 0;
}