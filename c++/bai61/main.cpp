#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> c;
int tong=0;
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        int k;
        cin>>k;
        c.push_back(k);
    }
    for(auto x:c)
        tong+=x;
    double j=1.0*tong/n;
    cout <<tong<<endl;
    cout<<fixed<<setprecision(3)<<j;
    return 0;
}
