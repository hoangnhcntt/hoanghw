#include <bits/stdc++.h>
using namespace std;
int n,j;
vector<int> c;
int main()
{
    cin>>n>>j;
    for(int i=1; i<=n; i++)
        c.push_back(i);
    int l=0;
    do
    {
        for(int i:c)
            cout<<i<<" ";
        cout<<endl;
    }
    while(next_permutation(c.begin(),c.end()));

    return 0;
}
