#include <iostream>
using namespace std;

int main(){
    // pointers in cpp
    // pointer--> datatype which stores the address of other datatypes
    int a=3;
    int *b=&a;
    // &--> (address of) operator
    cout<<"The address of a is :"<<b<<endl;


    // *--> (value at)dereference operator
    cout<<"The value at address of b is : "<< *b<<endl;
    // pointer to pointer
    int **c=&b;
    cout<<"The address of b is : "<<c<<endl;
    cout<<"The value at b is : "<<**c<<endl;
    


    return 0;
}