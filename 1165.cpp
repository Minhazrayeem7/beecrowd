#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,i,j,flag;
    cin>>n;
    for(j=0;j<n;j++)
    {
        cin>>x;
        flag=0;
        for(i=2; i<x; i++)
        {
            if(x%i==0)
            {
                flag++;
            }
        }
        if(flag==0)
        {
            cout<<x<<" eh primo"<<"\n";
        }
        else
        {
            cout<<x<<" nao eh primo"<<"\n";
        }
    }
    return 0;
}

