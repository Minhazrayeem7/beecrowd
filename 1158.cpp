#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,i,j,sum;
    while(1)
    {
        sum=0;
        cin>>x;
        if(x==0)
        {
            break;
        }
        if(x%2!=0)
        {
            x=x+1;
        }
        for(j=1; j<=5; j++)
        {
            sum=sum+x;
            x=x+2;
        }
        cout<<sum<<"\n";
    }

return 0;

}
