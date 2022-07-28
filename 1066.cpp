#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,a,p=0,n=0,o=0,e=0;


    for(i=0; i<5; i++)
    {
        cin>>a;

        if(a>0)
        {
            p++;
        }
        if(a<0)
        {
            n++;
        }
        if(a%2!=0)
        {
            o++;
        }
        if(a%2==0)
        {
            e++;
        }
    }
    cout<<e<<" valor(es) par(es)"<<"\n";
    cout<<o<<" valor(es) impar(es)"<<"\n";
    cout<<p<<" valor(es) positivo(s)"<<"\n";
    cout<<n<<" valor(es) negativo(s)"<<"\n";
    return 0;
}
