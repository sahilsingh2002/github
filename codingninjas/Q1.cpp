#include <iostream>
using namespace std;
int main(){
    int n;
    while(true){
    cout<<"Enter Your number "<<endl;
    cin>>n;

    if (n>0){
        cout<<"1"<<endl;

    }
    else if(n<0){
        cout<<"-1"<<endl;
    }
    else{
        cout<<"0"<<endl;

    }
    }
    return 0;
}