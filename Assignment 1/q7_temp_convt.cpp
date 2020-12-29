#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float cel, fah;
    cout<<"Enter Temperature in Celcius: ";
    cin>>cel;
    fah = (cel * 9/5)+32;
    cout<<"The Temperature in Fahrenheit is: "<<fah;
    
    return 0;
}