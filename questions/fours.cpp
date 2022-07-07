#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
    string N;
    cin>>N;
    int four=0;
    int len=N.length();
    for(int i=0;i<len;i++){
        // cout<<N[i]<<endl;
        // int num=N[i];

        if(N[i]==52){
            four+=1;
        }
    }
    cout<<four<<endl;
    }
    return 0;
}