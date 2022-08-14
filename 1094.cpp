#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,num,x,y,z;
    double px,py,pz;
    char ch;
    cin>>n;
    x=0;
    y=0;
    z=0;
    for(i=1; i<=n; i++)
    {
        cin>>num>>ch;
        if(ch=='c'||ch=='C')
        {
            x=x+num;
        }
        if(ch=='r'||ch=='R')
        {
            y=y+num;
        }
        if(ch=='s'||ch=='S')
        {
            z=z+num;
        }

    }
    int total=x+y+z;
    px=(x*100)/(double)total;
    py=(y*100)/(double)total;
    pz=(z*100)/(double)total;
    cout<<"Total: "<<total<<" cobaias"<<"\n";
    cout<<"Total de coelhos: "<<x<<"\n";
    cout<<"Total de ratos: "<<y<<"\n";
    cout<<"Total de sapos: "<<z<<"\n";
    cout<<"Percentual de coelhos: "<<fixed<<setprecision(2) <<px<<" %"<<"\n";
    cout<<"Percentual de ratos: "<<fixed<<setprecision(2) <<py<<" %"<<"\n";
    cout<<"Percentual de sapos: "<<fixed<<setprecision(2) <<pz<<" %"<<"\n";


}
