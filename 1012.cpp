#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,tri,cir,trap,qur,rat;
    cin>>a>>b>>c;
    tri=0.5*a*c;
    cir=3.14159 * (c*c);
    trap=(a+b)/2 * c;
    qur= b*b;
    rat=a*b;
    cout<<"TRIANGULO: "<<fixed<<setprecision(3)<<tri<<"\n";
    cout<<"CIRCULO: "<<fixed<<setprecision(3)<<cir<<"\n";
    cout<<"TRAPEZIO: "<<fixed<<setprecision(3)<<trap<<"\n";
    cout<<"QUADRADO: "<<fixed<<setprecision(3)<<qur<<"\n";
    cout<<"RETANGULO: "<<fixed<<setprecision(3)<<rat<<"\n";
}
