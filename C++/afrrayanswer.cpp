#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool comp(int a, int b){
    return a>b;
}

int main() {
    int n,q;
    cin>>n>>q;
    int* array[n];
    
       for (int i=0;i<n;i++){
           int a;
           
           cin>>a;
           array[i]=int [a];
           for (int j=0;j<a;j++){
               
               cin>>array[i][j];
               
            
           }
        for(int i=0;i<q;i++){
            int r,c;
            cin>>r>>c;
            cout<<array[r][c]<<endl;
        }
        
           
       }
    return 0;
}
