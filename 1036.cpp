#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,d,R1,R2;
    cin>>a>>b>>c;

    d = ((b*b)-4*a*c);

    if((a==0)||(d<0))
    {
        cout<<"Impossivel calcular"<<"\n";
    }
    else
    {
        R1 = (-b + sqrt(d))/(2*a);
        cout<<"R1 = "<<fixed<<setprecision(5)<<R1<<"\n";
        R2 = (-b - sqrt(d))/(2*a);
        cout<<"R2 = "<<fixed<<setprecision(5)<<R2<<"\n";


    }
    return 0;
}
