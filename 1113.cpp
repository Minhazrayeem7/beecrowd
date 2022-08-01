#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a,b;
  while(1)
  {
      cin>>a>>b;
      if(a>b)
      {
          cout<<"Decrescente"<<"\n";
      }
       if(a<b)
      {
          cout<<"Crescente"<<"\n";
      }
      if(a==b)
      {
          break;
      }
  }
  return 0;

}
