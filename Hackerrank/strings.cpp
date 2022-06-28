#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s1,s2;
    
    cin>>s1;
    cin>>s2;
    string s3=s1+s2;
    cout<<s1.size()<<" "<<s2.size()<<endl;
    cout<<s3<<endl;
    char temp,c1,c2;
    c1=s1[0];
    c2=s2[0];
    temp=c1;
    c1=c2;
    c2=temp;
    cout<<s1<<" "<<s2<<endl;
    

    return 0;
}
