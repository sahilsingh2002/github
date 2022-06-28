#include <iostream>
using namespace std;

float average (int a, int b){
    return (a+b)/2;
}
int main(){
    int x,y;
    x=2;
    y=3;
    float c=average(x,y);
    cout<<c;
    return 0;
}