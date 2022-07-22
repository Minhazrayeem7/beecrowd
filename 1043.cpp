#include<bits/stdc++.h>
using namespace std;
int main()
{

    double a,b,c,Perimetro,Area;

    cin>>a>>b>>c;

    if(a+b>c && b+c>a && a+c>b)
    {
        Perimetro = a+b+c;
        cout<<"Perimetro = "<<fixed<<setprecision(1)<<Perimetro<<"\n";
    }
    else
        {
         Area = 0.5*(a+b)*c;
       cout<<"Area = "<<fixed<<setprecision(1)<<Area<<"\n";
        }
    return 0 ;


}
