#include <bits/stdc++.h>
using namespace std;
long long L, R;
bool GiongHaNoiKhongKho(long long x)
{
    string s = to_string(x);
    string t = s;
    reverse(t.begin(), t.end());
    return s == t;
}
bool f[1000000];
void sangera(long long u)
{
    memset(f,true,sizeof(f));
    f[1]=false;
    long long i=2;
    while(i<=sqrt(u))
        if(f[i]==true)
        {
            int k=2;
            while(i*k<=u)
            {
                f[i*k]=false;
                k++;
            }
            i++;
        }
        else i++;
}
bool nt(long long x)
{
    if(x<2) return false;
    if(x<4) return true;
    for(int i=2; i*i<=x; i++)
        if(x%i==0)
            return false;
    return true;
}
int main()
{
    cin >> L >> R;
    long long dem = 0;
    sangera(R);
    for (int i = L; i <= R; i++)
    {
        if(i<1000000)
        {
            if (f[i] && GiongHaNoiKhongKho(i))
            {
                dem++;
            }
        }
        else if (nt(i) && GiongHaNoiKhongKho(i))
        {
            dem++;
        }
    }
    cout << dem;
    return 0;
}
