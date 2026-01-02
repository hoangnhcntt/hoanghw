#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> c;
double tong;
int l=1;
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        int k;
        cin>>k;
        c.push_back(k);
    }
    for(int i=1; i<=c.size()-1; i++)
    {
        if(c[i]<c[i-1])
        {
            cout<<"NO";
            l=0;
            break;
        }
    }
    if(l!=0)
        cout<<"YES";
    return 0;
}
