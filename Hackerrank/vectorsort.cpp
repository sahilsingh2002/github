#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector <int> vec1;
    int n,element;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>element;
        vec1.push_back(element);

    }
    sort(vec1.begin(),vec1.end());
    for (int i=0;i<vec1.size();i++){
        cout<<vec1[i]<<" ";
    }
    
    return 0;
}