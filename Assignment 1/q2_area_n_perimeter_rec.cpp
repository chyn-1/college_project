#include <iostream>
using namespace std;

int main(){
    int l, b, p, a;
    cout<<"Enter Length: ";
    cin>>l;
    cout<<"Enter Width: ";
    cin>>b;
    p=2*(l+b);
    a=(l*b);
    cout<<"The Perimeter is : "<<p<<endl;
    cout<<"The Area is : "<<a<<endl;
    return 0;

}