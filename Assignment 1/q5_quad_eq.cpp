#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float a, b, c, x,y;
    cout<<"Enter Coefficient of X square: ";
    cin>>a;
    cout<<"Enter Coefficient of X : ";
    cin>>b;
    cout<<"Enter Constant: ";
    cin>>c;
    x=((-b)+sqrt(pow(b,2)-4*a*c))/2*a;
    y=((-b)-sqrt(pow(b,2)-4*a*c))/2*a;
    cout<<"The Solutions of equation are : "<<endl;
    cout<<x<<endl;
    cout<<y<<endl;
    return 0;

}