#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin>>x;
    cout<<x<<"\n";

    y=x/100;
    x=x%100;
    cout<<y<<" nota(s) de R$ 100,00"<<"\n";

    y=x/50;
    x=x%50;
    cout<<y<<" nota(s) de R$ 50,00"<<"\n";

    y=x/20;
    x=x%20;
    cout<<y<<" nota(s) de R$ 20,00"<<"\n";

    y=x/10;
    x=x%10;
    cout<<y<<" nota(s) de R$ 10,00"<<"\n";

    y=x/5;
    x=x%5;
    cout<<y<<" nota(s) de R$ 5,00"<<"\n";

    y=x/2;
    x=x%2;
    cout<<y<<" nota(s) de R$ 2,00"<<"\n";

    y=x/1;
    x=x%1;
    cout<<y<<" nota(s) de R$ 1,00"<<"\n";
    return 0;
}
