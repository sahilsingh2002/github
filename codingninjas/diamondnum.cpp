#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows"<<endl;
    cin>>n;
    for(int i=0;i<=n;i++){
        int j=0;
        while (j<n-i){
            cout<<" ";
            j++;
            continue;
        }
        int q=1;
        while (q<=i){
            cout<<q;
            q++;
            continue;
        }
        cout<<endl;
    }
    return 0;
}
