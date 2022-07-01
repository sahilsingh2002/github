#include <iostream>
using namespace std;
void towerofhanoi(int n,int from,int to,int between){
    if (n=0){
    cout<<"yoyo";
    }
    towerofhanoi(n-1,from,between,to);
    cout<<"Move the "<<n-1<<" th "<< "disk from "<<from<<"to "<<to<<endl;
    towerofhanoi(n,between,to,from);
    

}


int main(){
    int n;
    cin>>n;
    towerofhanoi(n,1,2,3);
    
    return 0;
}