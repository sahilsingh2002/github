#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for (int i=0;i<=n;i++){
        for (char j=97+n-i;j<97+n;j++){
            cout<<j;


        }
        cout<<endl;
    }
    return 0;
}