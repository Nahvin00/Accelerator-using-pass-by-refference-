#include <iostream>
#include <iomanip>
using namespace std;
void getData(int&,int&,int&);
void calculate(double,double,double,double&);
void displayAverageAccelaration(int,int,int,double);
int main()
{
    int v0,v1,t;
    double A;
    getData(v0,v1,t);
    double v0d=v0,v1d=v1,td=t;
    calculate(v0d,v1d,td,A);
    displayAverageAccelaration(v0,v1,t,A);
    return 0;
}

void getData(int& x, int& y, int& z){
    cout<<"Input the starting velocity (km/h):";
    cin>>x;
    cout<<"Input the ending velocity (km/h):";
    cin>>y;
    cout<<"Input the time span (s):";
    cin>>z;
}

void calculate(double x, double y, double z, double& a){
    a=((y-x)/z)-1;
}

void displayAverageAccelaration(int x, int y, int z, double a){
    std::cout<<std::setprecision(1)<<"\n\nThe average accelaration needed to accelarate a car from "
    <<x<<" km/h to "<<y<<" km/h in "<<z<<" seconds is "<<a<<"m/(s*s)";
}
