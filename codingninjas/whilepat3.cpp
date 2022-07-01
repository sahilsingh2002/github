#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows of number triangle pattern"<<endl;
    cin>>n;

    int i=1;
    while(i<=n){
        int j=0;
        while(j<i){
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
/*
 if n=6,
1
22
333
4444
55555
666666*/
