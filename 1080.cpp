#include<bits/stdc++.h>
using namespace std;
int main()
{

    int i,x,n,p,hig=0;
    for(i=1;i<=100;i++)
    {
        cin>>n;
        if(n>hig)
        {
            hig=n;
            p=i;
        }
    }
    cout<<hig<<"\n"<<p<<"\n";
    return 0;

}
