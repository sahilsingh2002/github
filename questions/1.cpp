#include <iostream>
using namespace std;

void enter(int a[],int n){
    for(int i=0;i<n;i++){
        cin>>a[i];
        
    }

}
int main(){
    int T;
    cin>>T;
    for (int i=0;i<T;i++){
        int q=0;
        int N;
        cin>>N;
        
        enter(int a[],N);
        enter(int b[],N);
        for(int k=0;k<N;k++){
            for (int l=k+1;l<N;l++){
                if((a[k]^a[l])==(b[k]^b[l])){
                    q++;
                    
                }
            }
        }
        cout<<q<<endl;
    }
    return 0;
}