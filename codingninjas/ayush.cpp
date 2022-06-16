#include <iostream>
using namespace std;

int main() {
	int arr[3];
    for (int i=0;i<3;i++){
        cin>>arr[i];
        
    }
    int q=arr[0];
    for(int i=1;i<3;i++){
        q-=arr[i];
    }
    cout<<q<<endl;
	return 0;
}
