#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h,m,s;
    cin>>n;
    h = n/3600;
    n = n%3600;
    m = n/60;
    s = n%60;
    cout<<h<<":"<<m<<":"<<s<<"\n";
    return 0;

}
