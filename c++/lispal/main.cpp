#include <bits/stdc++.h>
using namespace std;
int n;
bool kt(int x)
{
    int nguoc;
    while(x>0)
    {nguoc+=x%10;
        if(x>0)
            nguoc*=10;
    }
    if(nguoc==x)
        return true;
    else
        return false;
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        if(x>10)
          if(kt(i)==true)
            cout<<i<<" ";
    return 0;
}
