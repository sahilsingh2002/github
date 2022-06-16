#include <iostream>
using namespace std;

int partition(int n,int arr[n],int left,int right){

    
    int i=left;
    int j=right-1;
    int pivot=arr[right];
    while (i<j){
        while (i < right && arr[i]<pivot){
            i+=1;
        }
        while (j>left && arr[j]>=pivot){
            j-=1;
        }
        if (i<j){
            int temp;
            temp=arr[i];
            arr[i]=arr[j]; 
            arr[j]=temp;
        }
        if(i<right && arr[i]>pivot){
            int vemp;
            vemp=arr[i];
            arr[i]=arr[right];
            arr[right]=vemp;

        }
    return i;
    }



}
int quicksort(int n,int arr[n],int left,int right){
    if (left<right){
        int partition_pos=partition(n,arr[n],left,right);
        quicksort(n,arr[n],left,partition_pos-1);
        quicksort(n,arr[n],partition_pos+1,right);

    
    }
return 0;
}
int main(){
    
    int arr[7]={6,5,4,7,6,8};
   
    quicksort(7,arr[7],0,6);
    cout<<arr[7];
    return 0;
}