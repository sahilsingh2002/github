#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for (int i=0;i<=n;i++){
        
        for (int spaces=0;spaces<n-i;spaces++){
        cout<<" ";
        }
        for (int j=0;j<2*i-1;j++){
            // cout<<spaces;
        
        cout<<i;
    }
    cout<<endl;
    
    }
    for ( int i=0;i<n;i++){
        for (int spaces=0;spaces<i+1;spaces++){
            cout<<" ";

        }
        for (int j=0;j<(2*(n-i-1)-1);j++){
            cout<<n-i-1;

        }
        cout<<endl;

    }
    return 0;
}
//spaces like 4,3,2,1 in 5 lines
// if spaces<n-i,cout<<" "