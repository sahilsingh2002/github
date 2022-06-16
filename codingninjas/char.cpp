#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    cout<<"Same char in one line"<<endl;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++){
            char b=97+i;
            
            cout<<b;
        }
        cout<<endl;
    }cout<<endl<<"All chars in all lines "<<endl;
        
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++){
            char b=97+j;
            
            cout<<b;
        }
        cout<<endl;
    }
    return 0;
}