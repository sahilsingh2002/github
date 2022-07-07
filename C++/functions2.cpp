#include <iostream>
using namespace std;
int factorial(int n){
    if (n<=1){
        return 1;
    }
    return n*factorial(n-1);

}
bool isprime(int n){
    bool primen;
    for (int i=2;i<n-1;i++){
        if (n%i!=0){
            primen=true;
        
        }
        else{
            primen=false;
        }
        
        
    
    }
return primen;
}
int main(){
    int n,r;
    cout<<"Enter value of n,r"<<endl;

    cin>>n>>r;
    int ncr=factorial(n)/(factorial(n-r)*factorial(r));
    cout<<"The value of "<<n<<"C"<<r<<" is "<<ncr<<endl;
    bool prime= isprime(n);
    if (prime==1){
        cout<<"The number "<<n<<" is a prime number."<<endl;
    }
    else{
        cout<<"The number "<<n<<" is not a prime number."<<endl;
    }
    
    return 0;
}