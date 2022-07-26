#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,d,e,media,media2;
    cin>>a>>b>>c>>d;

    media=((a*2)+(b*3)+(c*4)+(d*1))/10;
    cout<<"Media: "<<fixed<<setprecision(1)<<media<<"\n";

    if(media>=7.0)
    {
        cout<<"Aluno aprovado."<<"\n";
    }
    else if(media<5.0)
    {

        cout<<"Aluno reprovado."<<"\n";
    }
    else if(media>=5.0&&media<7.0)
    {
        cout<<"Aluno em exame."<<"\n";
        cin>>e;
        cout<<"Nota do exame: "<<e<<"\n";

        media2=((media+e)/2);
        if(media2>=5.0)
        {
            cout<<"Aluno aprovado."<<"\n";
            cout<<"Media final: "<<fixed<<setprecision(1)<<media2<<"\n";
        }
        else
        {
            cout<<"Aluno reprovado."<<"\n";
            cout<<"Media final: "<<fixed<<setprecision(1)<<media2<<"\n";
        }

    }
    return 0;
}
