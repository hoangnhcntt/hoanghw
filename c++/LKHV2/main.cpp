#include <bits/stdc++.h>
using namespace std;
int n,j;
vector<int> c;
int main()
{
    cin>>n>>j;
    for(int i=1; i<=n; i++)
    {
        int k;
        cin>>k;
        c.push_back(k);
    }
    vector<int> d;
    for(int i=1; i<=n; i++)
    {
        d.push_back(i);
    }
    int l=1;
    do
    {

        if(c==d)break;
        l++;

    }
    while(next_permutation(d.begin(),d.end()));
    cout<<l;
    return 0;
}
