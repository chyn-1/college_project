#include <iostream>
using namespace std;

int main(){
    
    char ch;
    cout<<"Enter any character: ";
    cin>>ch;
    
    for (size_t i = 0; i <4 ; i++)
    {
        ch++;
        cout<<"The next char is: "<<ch<<"\n";
    }
     
    
    
    return 0;

}