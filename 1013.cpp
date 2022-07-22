#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,x;
    cin>>a>>b>>c;
    x=( a+b+abs(a-b))/2;
    x=( x+c+abs(x-c))/2;
    cout<<x<<" eh o maior"<<"\n";
}
