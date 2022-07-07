#include <iostream>
using namespace std;
// void rupees (int x,int y,int z){
//     int a=y,b=z;
//     if(x<=y){
//             cout<<z<<endl;
//         }
//         else{
//             z+=z;
//             y+=y;
            
//             rupees(x,y,z);
//         }

// }

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int x,y,z;
        cin>>x>>y>>z;
        if(x%y==0){
            if(x/y==0){
            cout<<z<<endl;

            }
            else{
                cout<<z*(x/y)<<endl;
            }
        }
        else if (x%y!=0){
            int q=x/y;
            q=q+1;
            cout<<z*q<<endl;
        }
        
    }
    return 0;
}
        // rupees(x,y,z);