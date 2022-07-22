#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x;
    cin>>x;
    if(x>=0 && x <= 25.0000)
    {
        cout<<"Intervalo [0,25]"<<"\n";
    }

    else if(x>=25.0001 && x <= 50.0000)
    {
        cout<<"Intervalo (25,50]"<<"\n";
    }
     else if(x>=50.0001 && x <= 75.0000)
    {
          cout<<"Intervalo (50,75]"<<"\n";
    }
     else if(x>=75.0001 && x <= 100.0000)
    {
          cout<<"Intervalo (75,100]"<<"\n";
    }
    else
    {
        cout<<"Fora de intervalo"<<"\n";
    }
    return 0;
}

