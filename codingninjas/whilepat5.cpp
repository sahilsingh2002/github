#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=0;
    while(i<n){
        int j=0;
        while(j<=i){
            cout<<char(97+i);
            j++;

        }
        cout<<endl;
        i++;
    }

    return 0;
}
/* Sample Input 2:
6
Sample Output 2:
A
BB
CCC
DDDD
EEEEE
FFFFFF*/