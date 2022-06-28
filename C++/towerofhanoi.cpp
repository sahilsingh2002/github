#include <iostream>
using namespace std;
int towerofhanoi(int n,int from,int to,int between){
    if (n=0){
        return 0;
    }
    towerofhanoi(n-1,from,between,to);
    cout<<"Move the "<<n-1<<" th "<< "disk from "<<from<<"to "<<to<<endl;
    towerofhanoi(n,between,to,from);
    return n;

}


int main(){
    int n;
    cin>>n;
    cout<<towerofhanoi(n,1,2,3);
    
    return 0;
}