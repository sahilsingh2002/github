#include <iostream>
using namespace std;

int main(){
    int T;
    cin>>T;
    for (int i=0;i<T;i++){
        int q=0;
        int N;
        cin>>N;
        int arr[N];
        for (int j=0;j<N;j++){
            cin>>arr[j];

        }
        for (int p=0;p<N-1;p++){
            if (arr[p]>arr[p+1]){
                q++;
            }
        }
        if(q>0){
            cout<<"No"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        }

    }
    return 0;
}