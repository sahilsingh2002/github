#include <iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter the length"<<endl;

    cin>>n;
    cout<<"Enter The breadth"<<endl;
    cin>>m;
    for (int j=0;j<m;j++){
    for(int i=0;i<n;i++){
        cout<<"* ";
    }
    cout<<endl;
    }
    return 0;
}