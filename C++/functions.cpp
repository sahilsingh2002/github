#include <iostream>
using namespace std;


//function prototype
// type func-name(arguments); 
int sum (int a, int b);
void g(void);

// main is a function which takes int values
// int sum(int a, int b){
//     int c = a+b;
//     return c;
// program only works if mention before using



int main(){
    int num1,num2;
    cout<<"Enter first num:"<<endl;
    cin>>num1;

    cout<<"Enter second num:"<<endl;
    cin>>num2;
    cout<<"The sum is "<<sum(num1, num2);
    // sum function used
    g();
    return 0;

}
int sum(int a, int b){
    int c = a+b;
    return c;
    
}
void g(){
    cout<<"Hello"<<endl;
}