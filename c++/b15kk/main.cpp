#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> c;
double tong;
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        int k;
        cin>>k;
        c.push_back(k);
    }
    sort(c.begin(),c.end(),greater<int>);
    for(int i=0; i<=c.size()-1; i++)
        if(c[i]!=c[0])
        {
            cout<<c[i];
            break;
        }
    return 0;
}
