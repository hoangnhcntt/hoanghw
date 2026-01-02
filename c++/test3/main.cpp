#include <bits/stdc++.h>
using namespace std;
int n;
int a[700][700];
int tonghang[10000],tongcot[10000];
int rmax = -1e9;
void hang()
{
    for (int i = 1; i <= n; i++)
    {
        if (tonghang[i] == rmax)
        {
            for (int j = 1; j <= n; j++)
                cout << a[i][j] << " ";
            cout << endl;
        }
    }
}
void cot()
{
    for (int j = 1; j <= n; j++)
    {
        if (tongcot[j] == rmax)
        {
            for (int i = 1; i <= n; i++)
                cout << a[i][j] << " ";
            cout << endl;
        }
    }
}

int main()
{
    cin>>n;
    for (int i = 1; i<=n; i++)
        for (int j = 1; j <=n; j++)
            cin >> a[i][j];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
        {
            tonghang[i] += a[i][j];
            tongcot[j] += a[i][j];
        }
    for (int i = 1; i <= n; i++)
        rmax = max({rmax, tongcot[i], tonghang[i]});
    hang();
    cot();
    return 0;
}
