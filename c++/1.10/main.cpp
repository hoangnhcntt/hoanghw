#include <bits/stdc++.h>
using namespace std;
int n,k;
int main()
{
    cin>>n>>k;
    int tong=0;
    int a[10000];
    for(int i=1; i<=n; i++)
        cin>>a[i];
    for(int i=1; i<=n; i++)
        for(int j=i+1; j<=n; j++)
        {
            for(int p=i; p<=j; p++)
            {
                tong+=a[p];
                if(tong==k)
                    {
                        cout<<"COS";
                        break;
                    }
            }
            tong=0;
        }

    return 0;
}
