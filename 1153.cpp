#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,fac;
    cin>>n;
    fac=1;
    for(i=n;i>=1;i--)
    {
        fac=fac*i;
    }
    cout<<fac;
    return 0;
}
