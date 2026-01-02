#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> a;
int sl=0;
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        int k;
        cin>>k;
        a.push_back(k);
    }
    int rmax= *max_element(a.begin(),a.end());
    for(int x:a)
        sl++;
    cout<<sl;
    return 0;
}
