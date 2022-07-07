#include <iostream>
using namespace std;

int main(){
    int T;
    cin>>T;
    for(int i=0;i<T;i++){
        int N,A,B;
        cin>>N>>A>>B;
        int time=(180+N)*2;
        int remain=A+B;
        cout<<time-remain<<endl;
    }
    return 0;
}