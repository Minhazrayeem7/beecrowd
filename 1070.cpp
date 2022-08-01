#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,x,y;
    cin>>x;
    if(x%2==0)
    {
        y=x+1;
        for(i=1; i<=6; i++)
        {
            cout<<y<<"\n";
            y=y+2;
        }

    }

       if(x%2!=0)
          {
        for(i=1; i<=6; i++)
        {
            cout<<x<<"\n";
            x=x+2;

        }

    }

}
