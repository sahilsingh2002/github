#include <iostream>
using namespace std;




int main(){
    int n,arr[n];
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    for (int k=0;k<n-1;k++){
        for(int i=0;i<n;i++){
            for (int j=i+1;j<n;j++){
                if (arr[i]>arr[j]){
                    int temp=arr[i];

                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
    }
    for (int i=0;i<5;i++){
        cout<<arr[i]<<endl;

    }

    return 0;
}