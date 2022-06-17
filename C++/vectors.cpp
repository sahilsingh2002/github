#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}


int main(){
    vector<int> vec1;
    // vector is just like list in python, it does not need to have specific indices. It just needs to have a size. It is not a list. It is a vector. It is a dynamic array.
    
    int element, SIZE;
    cout<<"Enter the size of the vector: ";
    cin>>SIZE;

    for (int i = 0; i < SIZE; i++){
        cout<<"enter a number: ";
        cin>>element;
        vec1.push_back(element);
        // push back is the command which pushes every thing cin into the vector
    }
    vec1.pop_back();
    // pop back is a command which removes the last element of the vector

    cout<<"The vector is: ";
    display(vec1);
    // display is a function which displays the elements of the vector. 
    
    cout<<"The size of the vector is: "<<vec1.size()<<endl;


    return 0;
}