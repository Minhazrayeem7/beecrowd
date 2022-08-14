///number 1
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }
    return 0;
}*/
/// number 2
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }
    return 0;
}*/
///number 3
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }
    return 0;
}*/
/// number 4
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(n-i);j++)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}*/
///number 5
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(n-i);j++)
        {
            cout<<" ";
        }
        for(j=1;j<=(2*i)-1;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}*/
///number 6
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j;
    cin>>n;
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=(n-i);j++)
        {
            cout<<" ";
        }
        for(j=1;j<=(2*i)-1;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}*/
///number7
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(n-i);j++)
        {
            cout<<" ";
        }
        for(j=1;j<=(2*i)-1;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }

    for(i=n-1;i>=1;i--)
    {
        for(j=1;j<=(n-i);j++)
        {
            cout<<" ";
        }
        for(j=1;j<=(2*i)-1;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}
