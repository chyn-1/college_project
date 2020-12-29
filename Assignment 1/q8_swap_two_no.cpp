#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a, b;
    cout<<"Enter First No.: ";
    cin>>a;
    cout<<"Enter Second No.: ";
    cin>>b;
    cout<<endl;
    cout<<"The no.s are being swapped.... "<<endl;
    cout<<endl;
    a=a*b;
    b=a/b;
    a=a/b;
    cout<<"Now the first no. is: "<<a<<"\n";
    cout<<"Now the second no. is: "<<b;
    return 0;
}