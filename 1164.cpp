#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,i,j,sum;
    cin>>n;
    for(j=0;j<=n;j++)
    {
        cin>>x;
        sum=0;
        for(i=1; i<x; i++)
        {
            if(x%i==0)
            {
                sum=sum+i;
            }
        }
        if(sum==x)
        {
            cout<<x<<" eh perfeito"<<"\n";
        }
        else
        {
            cout<<x<<" nao eh perfeito"<<"\n";
        }
    }
    return 0;
}
