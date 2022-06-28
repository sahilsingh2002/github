#include <iostream>
using namespace std;

// void swap(int a,int b)  this will not change values
// {                        temp    a    b
//     int temp=a;          9       9    2
//     a=b;                 9       2    2
//     b=temp;              9       2    9

// }
// void swappointer(int* a, int* b) //giving pointers to address of integers here

// {
//     int temp=*a;
//     *a=*b;
//     *b=temp;
void swapreference(int &a, int &b) //giving address here
// addresses same integers change

{
    int temp=a;
    a=b;
    b=temp;
    
}

int main()
{
    // swap(x,y);
    // cout<<"Value of a and b is "<<x<<", "<<y<<endl;
    int x=9, y=2;
    cout<<"Value of a and b is "<<x<<", "<<y<<endl;
    cout<<"address of a and b is "<<&x<<", "<<&y<<endl;
    swapreference(x,y);   //giving address
    
    cout<<"Value of a and b is "<<x<<", "<<y<<endl; // x points to a, y points to b
    cout<<"address of a and b is "<<&x<<", "<<&y<<endl; 
// addresses remain same
    




    return 0;
}
