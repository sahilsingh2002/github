#include <iostream>
using namespace std;
float FtoC(int n){
    double b= (n-32)*(5)/(9);
    return b;
}

int main(){
    int s,e,w;
    cout<<"Enter S,E,W"<<endl;
    cin>>s>>e>>w;
    for(int i=s;i<=e;i+=w){
        float celsius=FtoC(i);
        cout<<i<<" "<<celsius<<endl;
    }
    
    return 0;
}