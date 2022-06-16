#include <iostream>
using namespace std;

int main(){
    int T;
    cin>>T;
    for (int i=0;i<T;i++){
        int n;
        cin>>n;
        if((n-1%5)==0){
            cout<<(2*(n-1)/5)<<endl;

        }
        else if((n-1%5)==4){
            
        }
    }
    return 0;
}