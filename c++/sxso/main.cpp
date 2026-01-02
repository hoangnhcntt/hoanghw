#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int d[100000];
    int k=0;
    int kt=0,kt1=0;
    for(int i=1; i<=4; i++)
    {
        d[++k]=n%10;
        n/=10;
    }
    sort(d+1,d+1+k,greater<int>());
    for(int i=1; i<=k; i++)
        if(d[i]==0)
            kt=i;
    for(int i=1; i<=k; i++)
        if(d[i]==0)
            kt1=0;
    if(kt==0 && kt1==0)
    {
        for(int i=1; i<=k; i++)
            cout<<d[i];
    }
    else
    {
        if(kt!=0 && kt1==0)
        {
            for(int i=1; i<=k; i++)
            {

                if(d[i]!=0)
                    cout<<d[i];

            }
            cout<<d[kt];
        }
        else
        {
            for(int i=1; i<=k; i++)
            {
                if(d[i]!=5)
                    cout<<d[i];

            }
            cout<<d[kt1];
        }
    }
    return 0;
}
