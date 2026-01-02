#include <bits/stdc++.h>
using namespace std;
int n;
void sx(int x)
{
    for(int i=1; i<=x; i++)
        cout<<i<<" ";
}
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        sx(i);
        cout<<endl;
    }
    return 0;
}
