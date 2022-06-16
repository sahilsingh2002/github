#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;
ofstream output("out.dat");
class rlac
{
float z,r,l,ti,tf,h,k1,k2,k3,k4,t,fi,i,I,I1,vs,w,xl,p,pl;
int k,n;

float current(float vs,float w,float t, float I, float r,float l)
{
float i=(vs*sin(w*t)-(I*r))/l;
return i;
}

public:
void get();
void cal();
};

void rlac::get()
{
cout<<"enter the value of resistance, inductance, initial time,final time, step size, max voltage,amplitude, frequency";
cin>>r>>l>>ti>>tf>>h>>vs>>w;
n=(tf-ti)/h;
}

void rlac::cal()
{

xl=w*l;
z=sqrt((r*r)+(xl*xl));
fi=atan(xl/r);
t=0;
I=-(vs*sin(fi))/z;

for(k=1;k<=n;k++)
{
t=t+h;
k1=h*current(vs,w,t,I,r,l);
k2=h*current(vs,w,t,I+(k1)/2,r,l);
k3=h*current(vs,w,t,I+(k2)/2,r,l);
k4=h*current(vs,w,t,I+k3,r,l);

I=I+(k1+(2*k2)+(2*k3)+k4)/6;
I1=(vs*sin(w*t-fi))/z;
p=(vs*sin(w*t))*I;
pl=(vs*sin(w*t))*I1;

output<<t<<" "<<I<<" "<<I1 <<" "<<p<<" "<<pl<<" "<<endl;
}
}
int main()
{
rlac ac;
ac.get();
ac.cal();
return 0;
}
//input parameters
//(a) r=2,l=3, ti=0, tf=5, h=0.01, vs=5, w=4.25
//(b) r=2, l=3, ti=0, tf=5, h=0.05, vs=5, w=4.25


