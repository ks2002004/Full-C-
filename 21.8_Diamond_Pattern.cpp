// Diamond Pattern in c++

// jb bhi koi cheez pattern main odd number main print hoti hai toh yeh formula lagta hai (2 * i - 1)


// phele pyramid ko aise print karenge 

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"\n enter the number "<<endl;
    cin>>n;

    // 1st pyramid 
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
        // for spaces
            cout<<" ";
        }
        for(int k=1;k<=(2*i-1);k++){
            // for printing stars
            cout<<"*";
        }
        cout<<endl;
    }

    // 2nd pyramid

    for(int i=n;i>=1;i--){
        for(int j=1;j<=n-i;j++){
            // for spaces
            cout<<" ";
        }
        for(int k=1;k<=(2*i-1);k++){
            // for stars
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}

