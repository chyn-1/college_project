#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int num, deno, frac, deci, rem, quo;
    
    cout<<"Enter the Numerator: ";
    cin>>num;
    cout<<"Enter the Denominator: ";
    cin>>deno;
    rem = num % deno;
    quo = num / deno;
    float divi= num / deno;
    cout<<endl;
    cout<<num<<"/"<<deno<<" is equal to "<<quo<<" "<<rem<<"/"<<deno<<endl;
    
    cout.precision(3);
    cout<<"Its also equal to "<<divi;

    return 0;
}