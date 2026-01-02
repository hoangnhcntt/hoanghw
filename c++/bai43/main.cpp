#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> c;
int main()
{
    cin>>n;
    for(int i=1;i<=sqrt(n); i++)
        if(n%i==0)
        {
            c.push_back(i);
            if(i!=n/i)
                c.push_back(n/i);
        }
    sort(c.begin(),c.end());
    for(int x:c)
        cout<<x<<" ";
    return 0;
}
