#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A1,B1,A2,B2;
    double C1,C2,X;
    cin>>A1>>B1>>C1;
     cin>>A2>>B2>>C2;
    X=((B1*C1)+(B2*C2));
    cout<<"VALOR A PAGAR: R$ "<<fixed<<setprecision(2)<<X<<"\n";
    return 0;
}
