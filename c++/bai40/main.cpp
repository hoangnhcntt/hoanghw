#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int>> c;
int n, a, b;
int main()
{
    freopen("bai40.inp","r",stdin);
    freopen("bai40.inp","w",stdout);
    cin >> n >> a >> b;
    for(int x = 0; x <= n/a; x++)
    {
        int p = n - a*x;
        if(p >= 0 && p % b == 0)
        {
            int y = p/b;
            c.push_back(make_pair(x, y));
        }
    }
    if(c.empty())
        cout << "NONE";
    else for(pair<int,int> x : c)
            cout << x.first << " " << x.second << endl;
    return 0;
}
