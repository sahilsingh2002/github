#include <iostream>
using namespace std;
// fibonacci is 1,1,2,3,5,8,...
int fibonacci(int n){
    if (n<=1){
        return 1;

    }
    return fibonacci(n-1)+fibonacci(n-2);
// void fibonacci(int n){
//     int a=1,b=1;
//     int c;
//     cout<<a<<" "<<b<<" ";
//     for (int i=0;i<n-1;i++){
//         c=a+b;
//         b=a;
//         a=c;
//         cout<<c<<" ";

    }
    // cout<<" "<<;
    
    


int main(){
    int a;
    cin>>a;
    cout<<"The fibonacci sequence till "<<a<<"th index is "<< fibonacci(a);
    return 0;
}