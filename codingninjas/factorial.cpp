#include <iostream>
using namespace std;

int main(){
    int n;
    int b=1;

    cout<<"Enter your number"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        b*=i;
    }
    cout<<"The factorial of "<<n<<" is "<<b<<endl;
    return 0;
}