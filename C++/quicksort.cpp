#include <iostream>
#include <vector>
using namespace std;

int partition(int n,int vector <int> a,int left,int right){

    
    int i=left;
    int j=right-1;
    int pivot=a[right];
    while (i<j){
        while (i < right && a[i]<pivot){
            i+=1;
        }
        while (j>left && a[j]>=pivot){
            j-=1;
        }
        if (i<j){
            int temp;
            temp=a[i];
            a[i]=a[j]; 
            a[j]=temp;
        }
        if(i<right && a[i]>pivot){
            int vemp;
            vemp=a[i];
            a[i]=a[right];
            a[right]=vemp;

        }
    return i;
    }



}
int quicksort(int n,vector <int> a,int left,int right){
    if (left<right){
        int partition_pos=partition(n,a[n],left,right);
        quicksort(n,a[n],left,partition_pos-1);
        quicksort(n,a[n],partition_pos+1,right);

    
    }
return 0;
}
int main(){
    
    int n,element;
    vector <int> a;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>element;
        a.push_back(element);
    }
   
    quicksort(n,a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
    ;
    return 0;
}