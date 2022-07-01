#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows of reverse number  triangle pattern"<<endl;
    cin>>n;

    int i=1;
    while(i<=n){
        int j=0;
        while(j<i){
            cout<<i-j;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
/*Sample Input 2:
6
Sample Output 2:
1
21
321
4321
54321
654321
*/