#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if((a<b)&&(a<c))
    {
        if(b<c)
            cout<<a<<"\n"<<b<<"\n"<<c<<"\n";

        else
             cout<<a<<"\n"<<c<<"\n"<<b<<"\n";

    }
      if((b<a)&&(b<c))
    {
        if(a<c)
            cout<<b<<"\n"<<a<<"\n"<<c<<"\n";
        else
             cout<<b<<"\n"<<c<<"\n"<<a<<"\n";
    }
     if((c<a)&&(c<b))
    {
        if(a<b)
            cout<<c<<"\n"<<a<<"\n"<<b<<"\n";
        else
             cout<<c<<"\n"<<b<<"\n"<<a<<"\n";
    }
    cout<<endl;

    cout<<a<<"\n"<<b<<"\n"<<c<<"\n";
    return 0;
}
