#include <iostream>
using namespace std;
typedef struct employee   //typedef makes the code short as it makes struct employee *name* to the keyword you gave *name*
{
    /* data */
    int eId;
    char favChar;
    float salary;
} ep;
// struct is very similar to classes in pytthon where you have one thing and everything goes around it.

union money
{
    int rice;
    float pounds;
    char car;
// union makes use of only one of the given variables inside it. It shares all the three variable's memories in one.
// if you gave pounds and then car, only car remains rest is deleted

};




int main()
{
// union money m1;
// m1.rice=34;
// m1.car='c';
// // cout<<m1.car<<endl;
// // cout<<m1.rice<<endl;
// enum Meal{breakfast, lunch, denorm_indeterminate};
// // cout<<breakfast;
// Meal m2=breakfast;
// cout<<m2;



    struct employee harry;
    harry.eId=1;
    harry.favChar='c';
    harry.salary=1200000000;
    cout<<harry.salary<<endl;
    cout<<harry.eId<<endl;
    cout<<harry.favChar<<endl;
    struct employee shubham;
    // ep rohan;
    


    return 0;
}