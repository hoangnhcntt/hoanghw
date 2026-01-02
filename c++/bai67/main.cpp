#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> c;
int main()
{
    cin>>n;
    c.push_back(1);
    c.push_back(1);
    for(int i=3; i<=49; i++)
    {
        int k=c[i-1]+c[i-2];
        c.push_back(k);
    }
    cout<<c[n];
    return 0;
    //luoi code code sai;
}
