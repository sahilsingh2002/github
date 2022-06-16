#include <iostream>
using namespace std;

int main(){
    int n;
    string b="prime";
    cin>>n;
    for(int i=2;i<n;i++){
        if(n%i==0){
            b="not prime";
        }
    }
    cout<<b<<endl;


    return 0;
}