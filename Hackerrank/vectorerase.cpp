#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
        // same as v[i] is v.at(i)
        // cout<<v.at(i)<<" ";
    }
    cout<<endl;
}
int main(){
    int N,element,x,a,b;
    cin>>N;
    vector <int> vec1;
    for(int i=0;i<N;i++)
    {
        cin>>element;
        vec1.push_back(element);

    }
    cin>>x;
    vec1.erase(vec1.begin()+x-1);
    display(vec1);
    cin>>a>>b;
    vec1.erase(vec1.begin() + a-1, vec1.begin()+b-1);

    cout<<vec1.size()<<endl;

    display(vec1);
    
    
    return 0;
}