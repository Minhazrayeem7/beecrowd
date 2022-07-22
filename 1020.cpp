#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,y,m,d;
    cin>>n;
    y=n/365;
    n=n%365;
    m=n/30;
    d=n%30;
    cout<<y<<" ano(s)"<<"\n";
    cout<<m<<" mes(es)"<<"\n";
    cout<<d<<" dia(s)"<<"\n";
   return 0;
}
