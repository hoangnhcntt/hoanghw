#include <bits/stdc++.h>
using namespace std;
int n,j;
vector<int> c;
int main()
{
    cin>>n>>j;
    for(int i=1;i<=n;i++)
        c.push_back(i);
    int l=0;
    do
    {
        l++;
        if(l==j)
            break;
    }
    while(next_permutation(c.begin(),c.end()));
    for(int i:c)
        cout<<i<<" ";
    return 0;
}
