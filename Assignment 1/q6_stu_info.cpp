#include <iostream>
#include <string>
using namespace std;

int main(){
    string name;
    int height, weight, age;
    cout<<"Enter your Name: ";
    cin>>name;
    cout<<"Enter your Age: ";
    cin>>age;
    cout<<"Enter your Height: ";
    cin>>height;
    cout<<"Enter your Weight: ";
    cin>>weight;
    cout<<"Your inserted informations are as below: "<<endl;
    cout<<" You are "<<name<<endl<<" Age "<<age<<endl<<" With height "<<height<<endl<<" With weight"<<weight<<endl;
    
    return 0;
}