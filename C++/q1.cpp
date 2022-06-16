#include<iostream>
#include<fstream>
#include<math.h>
using namespace std;
class charge
{
    float r,c,ti,tf,h,qc,qce,qd,qde,q0,t,ic,id;
    int i,n;

    public:
    void getdata();
    void calculate();
    
};

void charge :: getdata()
{
cout<<"enter value of resistance, capacitance, initial time, final time, and step size"<<endl;
cin>>r>>c>>ti>>tf>>h;
n=(tf-ti)/h;
t=0;
qce=0;
q0=3;
qde=q0;
}

void charge :: calculate()
{
    for(i=1;i<=n,i++;)
    {
fstream output ("output.txt")
        ;t=t+h;
        qc=q0*(1-exp(-t/(r*c)));
        qd=q0*(exp(-t/r*c));
        ic=q0*(exp(-t/(r*c)))/(r*c);
        id = ic;
        qce=qce+(h*ic);
        qde=qde+(h*id);
    // cout<<t<<" "<<qc<<" "<<qce<<" "<<qd<<" "<<qde<<endl;

    output<<t<<" "<<qc<<" "<<qce<<" "<<qd<<" "<<qde<<endl;



    }
}
int main()
{
charge rcdc;
rcdc.getdata();
rcdc.calculate();
return 0;
}

