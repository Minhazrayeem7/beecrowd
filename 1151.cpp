#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x=0,y=1,n,fibo,i;
    cin>>n;
    cout<<x;
    cout<<" "<<y;
    for(i=2; i<n; i++)
    {
        fibo = x + y;
        x = y;
        y = fibo;
        cout<<" "<<fibo;
    }
    cout<<"\n";
    return 0;
}

