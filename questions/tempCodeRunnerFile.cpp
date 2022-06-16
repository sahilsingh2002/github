#include <iostream>
using namespace std;

int main(){
    int T;
    cin>>T;
    for (int i=0;i<T;i++){
        int q=0;
        int N;
        cin>>N;
        int a[N],b[N];
        for (int j=0;j<N;j++){
            cin>>a[j];
        }
        for (int j=0;j<N;j++){
            cin>>b[j];
        }
        for(int k=0;i<N;i++){
            for (int l=k+1;l<N;l++){
                if(a[k]^a[l]==b[k]^b[l]){
                    q+=1;
                }
            }
        }
        cout<<q<<endl;
    }
    return 0;
}