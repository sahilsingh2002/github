#include <iostream>
using namespace std;
int main() {
    int a=4, b=5;
    cout <<"a+b is : "<<a+b<<endl;
    cout <<"a-b is : "<<a-b<<endl;
    cout <<"a*b is : "<<a*b<<endl;
    cout <<"a/b is : "<<a/b<<endl;
    cout <<"a++ is : "<<a++<<endl;//first print then increase, a=5
    cout <<"a-- is : "<<a--<<endl;//first print then decrease, a=4
    cout <<"--a is : "<<--a<<endl;//first decrease then print,a=3
    cout <<"++a is : "<<++a<<endl;//first increase then print, a=4
    cout <<"a==b is : "<<(a==b)<<endl;
    cout <<"a<=b is : "<<(a<=b)<<endl;
    cout <<"a>=b is : "<<(a>=b)<<endl;
    cout <<"a>b is : "<< (a>b )<<endl;
    cout <<"a<b is : "<< (a<b )<<endl;
    cout <<"a!=b is : "<<(a!=b)<<endl;
    //&& is and operator, || is or operator
    return 0;
}