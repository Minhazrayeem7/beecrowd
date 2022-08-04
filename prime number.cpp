#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, flag = 0;
    cin>>n;
       for (i = 2; i < n; i++)
    {
        if (n%i == 0)
        {
            flag++;
        }
    }

    if (flag==0)
    {
        cout<<"Prime number";
    }
    else
    {
        cout<<"Not a Prime number";
    }
    return 0;
}
