#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    while(1)
    {
        cin>>n;
        if(n==0)
        {
            break;
        }
        cout<<"1";
        for(i=2; i<=n; i++)
        {
            cout<<" "<<i;
        }
        cout<<"\n";
    }
    return 0;
}
