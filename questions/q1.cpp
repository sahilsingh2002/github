#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;

    int sum=0;
    int originaln=n;
    while(n>0){
        int lastdigit = n%10;
        sum+= (lastdigit*lastdigit*lastdigit);
        n=n/10;
        
        cout<<n<<endl;
        cout<<sum<<endl;
    }
    if(sum==originaln){
        cout<<"Armstrong";
    } else {
        cout<<"not";
    }

    return 0;
}
