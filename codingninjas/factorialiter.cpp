#include <iostream>
using namespace std;

int main(){
    int n,r;
    cin>>n>>r;

    
    int fact_n=1;
    
    for(int i=1;i<=n;i++){
        fact_n=fact_n*i;
    }
    int fact_r=1;
    
    for(int i=1;i<=r;i++){
        fact_r=fact_r*i;
    }
    int fact_n_r=1;
    
    for(int i=1;i<=n-r;i++){
        fact_n_r=fact_n_r*i;
    }
    cout<<(fact_n/(fact_r * fact_n_r));



    return 0;
}