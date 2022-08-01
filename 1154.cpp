#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    double sum=0,flag=0;
    while(1)
    {
        cin>>a;
        if(a>0)
        {
            sum=sum+a;
            flag++;
        }
        else
        {
            break;
        }

    }
    cout<<fixed<<setprecision(2)<<sum/flag<<"\n";

    return 0;

}

