#include <iostream>
using namespace std;

int main(){
    int a, p, r, t;
    cout<<"Enter Principle Amount: ";
    cin>>p;
    cout<<"Enter Rate of Interest (in %): ";
    cin>>r;
    cout<<"Enter Time Period : ";
    cin>>t;
    a=p*r*t;
    cout<<"The simple interest interest is: "<<a<<endl;
    cout<<"The amount is: "<<a+p<<endl;
    return 0;
}