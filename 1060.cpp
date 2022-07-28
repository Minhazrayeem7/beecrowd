#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,flag=0;
    double n;
    for(i=0; i<6; i++)
    {
        cin>>n;
       if(n>0)
        {
            flag++;

        }
    }
    cout<<flag<<" valores positivos"<<"\n";
    return 0;
}
