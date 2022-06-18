#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
        // same as v[i] is v.at(i)
        cout<<v.at(i)<<" ";
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
    // vec1.pop_back();
    // pop back is a command which removes the last element of the vector

    cout<<"The vector is: ";
    display(vec1);
    vector<int> :: iterator iter = 
    vec1.begin();
    //  iterator is a pointer to the vector. it points to vec1.begin() which is the first index of the vector. iter is the variable name given to iter

    vec1.insert(iter,5, 566);
    // insert is a command which inserts a number at a specific index. it inserts 566 at the iter index which is the first index of the vector.
    // the second value in bracket is number of times the value given is inserted. it is 5. so it inserts 566 5 times. it is like a loop.

    display(vec1);

    // display is a function which displays the vector

    cout<<"The size of the vector is: "<<vec1.size()<<endl;
     
    
    


    return 0;
}