#include <iostream>
#include <vector>
using namespace std;


int main(){
    int n,q;
    cin>>n>>q;
    vector <vector <int>> arr;
    for(int i=0;i<n;i++){
        vector <int> vec1;
        int number,element;
        cin>>number;
        for (int k = 0; k < number; k++)
        {
            cin>>element;
            vec1.push_back(element);
        

        }
        
        arr.push_back(vec1);
        
        
        
    }
    vector <int> vec2; 
    for(int j =0;j<q;j++){
        int idx,num;
        cin>>idx;
        cin>>num;
        vec2.push_back(arr[idx][num]);
       
        cout<<vec2[j];


    }
    
    return 0;
}