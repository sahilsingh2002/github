#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"type a number below"<<endl;
    cin>>n;
    int i=0;

    while(i<n){
        int j=0;
        while(j<n){
            cout<<n;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
/*if n=5
55555
55555
55555
55555
55555
*/