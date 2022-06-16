#include <iostream>
using namespace std;

int main(){
    /*arrays
    collection of similasr type of items
    stored in contiguous blocks
    */
   int marks []={23,34,45,56};
   int mathmarks [4];
   mathmarks[0]=12;
   mathmarks[1]=56435;
   mathmarks[2]=12312;
   mathmarks[3]=24343;
//    different ways of making arrays

// you can alsop changfe values in arrays

   mathmarks[2]=43;
   cout<<mathmarks[0]<<endl;
   cout<<mathmarks[1]<<endl;
   cout<<mathmarks[2]<<endl;
   cout<<mathmarks[3]<<endl;
//    cout<<marks[0]<<endl;
//    cout<<marks[1]<<endl;
//    cout<<marks[2]<<endl;
//    cout<<marks[3]<<endl;

// For loop
// for(int i=0;i<len(marks);i++){
//     cout<<marks[i]<<endl;

int i=0;

/*while loop
while(i<4){
    cout<<marks[i]<<endl;
    i++;
}*/




/*do-while loop
do
{
    cout<<marks[i]<<endl;
    i++;
} while (i<4);*/
    int* p = marks;
    for (int i=0;i<4;i++){
        cout<<"this is "<<*p++<<endl;
    }
    

//     return 0;
}