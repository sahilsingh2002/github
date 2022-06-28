#include <iostream>
using namespace std;
typedef struct student{
 int age;
 string First;
 string Last;
 int Std;
}ep;
int main(){
    int Age,STD;
    string first,last;
    cin>>Age>>first>>last>>STD;

    struct student stud1;
    stud1.age=Age;
    stud1.First=first;
    stud1.Last=last;
    stud1.Std=STD;
    cout<<stud1.age<<" "<<stud1.First<<" "<<stud1.Last<<" "<<stud1.Std;
    
    
    return 0;
}