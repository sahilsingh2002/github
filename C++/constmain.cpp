#include<iostream>
#include <iomanip>
using namespace std;
int main(){
    // int a=34;
    // cout<<"The past value of a was "<<a<<endl;
    // a=23;
    // cout<< "The current value of a is :"<<a<<endl;
    // const int b=12;
    // const--> makes value of b constant so we cant change further as shown above

    // cout<<b;

// Manipulators, shapeshift the program
// endl is a manipulator
int a=12,b=12312,c=454;
cout<<"Value of a without setw is : "<<a<<endl;
cout<<"Value of b without setw is : "<<b<<endl;
cout<<"Value of c without setw is : "<<c<<endl;
cout<<"Value of a with setw is : "<<setw(6)<<a<<endl;
cout<<"Value of b with setw is : "<<setw(6)<<b<<endl;
cout<<"Value of c with setw is : "<<setw(6)<<c<<endl;
//setw sets width of output
    return 0;
}