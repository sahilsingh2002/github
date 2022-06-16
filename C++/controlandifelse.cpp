#include<iostream>
using namespace std;
int main()
{
    // if else statements(Selection control structure : if else-if else ladder)
    int a;
    cout <<" Enter your age : "<<endl;
    cin>>a;
    if (a>0 && a<100){

        if(a<18){
            cout<<"Underage";
        
        }
        else if (a==18){

            cout<<"just Adult";
        }
        else{
            cout<<"Adult boi";
        }
    }
    else{
        cout<<"Wrong age";
    }
    // selection control structure : switch statements
    switch(a)
    {
    case(18)://special cases(only constant values)
        cout<<"You are 18 ";
        break;
    case (22):
        cout<<"You are 22";
        break;
    default://when cases values are not given
        cout<<"No special thing";
    
    }
    cout<<endl<<"Done with age";


    return 0;
}
