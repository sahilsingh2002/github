#include <iostream>
using namespace std;

int Factorial(int n){
   int fact_n=1;
    for(int i=1;i<=n;i++){
        fact_n=fact_n*i;
        
    }
    return fact_n;
}
int main(){
    int n,r;
    cin>>n>>r;
    cout<<(Factorial(n)/(Factorial(r) * Factorial(n-r)));
    return 0;
}