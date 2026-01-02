#include <bits/stdc++.h>
using namespace std;
int n;
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
        cout<<"*";
    cout<<endl;
    for(int i=1; i<=n-2; i++)
    {
        for(int i=1; i<=n; i++)
        {
            if(i==1||i==n)
                cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
    for(int i=1; i<=n; i++)
        cout<<"*";
    return 0;
}
