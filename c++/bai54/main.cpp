#include <bits/stdc++.h>
using namespace std;
vector<int> c;
int n;
int i=2;
int main()
{
    cin>>n;
    while(i<=sqrt(n))
    {
        if(n%i==0)
        {
            c.push_back(i);
            n/=i;
        }
        else
            i++;
    }
    if(n>1)
        c.push_back(n);
    sort(c.begin(),c.end());
    cout<<c[c.size()-1];
    return 0;
}
