#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    double total;

    cin>>x>>y;

    if(x==1)
    {
        total = 4.00 * y;
        cout<<"Total: R$ "<<fixed<<setprecision(2)<<total<<"\n";
    }
    if(x==2)
    {
        total = 4.50 * y;
        cout<<"Total: R$ "<<fixed<<setprecision(2)<<total<<"\n";
    }
    if(x==3)
    {
        total = 5.00 * y;
        cout<<"Total: R$ "<<fixed<<setprecision(2)<<total<<"\n";
    }
    if(x==4)
    {
        total = 2.00 * y;
        cout<<"Total: R$ "<<fixed<<setprecision(2)<<total<<"\n";
    }
    if(x==5)
    {
        total = 1.50 * y;
        cout<<"Total: R$ "<<fixed<<setprecision(2)<<total<<"\n";
    }

    return 0;




}
