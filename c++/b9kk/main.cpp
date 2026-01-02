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
    for(int i=c.size()-1;i>=0;i--)
        cout<<c[i]<<" ";
    return 0;
}
