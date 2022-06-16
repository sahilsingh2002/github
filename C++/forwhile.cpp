#include <iostream>
using namespace std;
int main(){
    /*syntax for for loop
    for (initialization;condition;updation){
    for body
     }
    initialization--> Start point of variable, only seen first time
    condition--> condition on i, if true, go to body, if false, exit for loop
    updation --> once for body executed, update the value of i,goes to condition again
    */

    for(int i=0;i<=100;i++)
    {
    cout<<i<<endl;
    }

    /* Syntax for while loop
    first give value to a variable
    say 
    int i=0;
    while (condition);
    statements;

    simpler than for loops

    runs till condition is true
    */
   int i = 1;
   while(i<50){
   cout<<i<<endl;
   i++;
   }
// do-while loop

// int i=1;
do
{
    cout<<i<<endl;
    i++;

} while (false);
//if while is false, executes first step only


    return 0;

    
    
}