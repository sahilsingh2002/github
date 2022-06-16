#include <iostream>
using namespace std;

int sum(int a, int b)
{
    cout<<"Using function with 2 arguments"<<endl;
    return a+b;
}


int sum(int a, int b, int c)
{
    cout<<"Using function with 3 arguments"<<endl;
    return a+b+c;
}


// //Calculate the volume of a cylinder
// float volume(double r, int h)
// {
//     return(3.14rrh);
// }

// //Calculate the volume of a cube
// int volume(int a)
// {
//     return aaa;
// }


// //Calculate the volume of a rectangular box
// int volume(int l, int b, int h)
// {
//     return(lb*h);
// }



int main()
{
    cout<<"The sum of 3 and 6 is "<<sum(3, 6)<<endl;
    cout<<"The sum of 3, 7 and 6 is "<<sum(3, 7, 6)<<endl;
    cout<<endl;

    // cout<<"The volume of cuboid of 3, 7 and 6 is "<<volume(3, 7, 6)<<endl;
    // cout<<"The volume of cylinder of radius 3 and height 6 is "<<volume(3, 6)<<endl;
    // cout<<"The volume of cube of side 3 is "<<volume(3)<<endl;


    return 0;
}
