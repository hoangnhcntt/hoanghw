#include <bits/stdc++.h>
using namespace std;
int a[100][100],n,s1,s2;
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            cin>>a[i][j];
    for(int i=1; i<=n; i++)
        s1+=a[i][i];
    for(int i=1; i<=n; i++)
        s2+=a[i][n-i+1];
    cout <<s1 <<" "<<s2;
    return 0;
}
