#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,temp,i;
    cin>>x>>y;
    if(x>y)
    {
        temp=x;
        x=y;
        y=temp;
    }

    x=x+1;
    for(i=x;i<y;i++)
    {
        if(i%5==2||i%5==3)
        {
            cout<<i<<"\n";
        }
    }


}
