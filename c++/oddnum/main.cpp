#include <bits/stdc++.h>
using namespace std;
int hdpe(int x)
{
    int tong = 0;
    for(int i = 1; i <= sqrt(x); i++)
        if(x % i == 0)
        {
            if(i % 2 != 0)
                tong += i;
            int j = x / i;
            if(j != i && j % 2 != 0)
                tong += j;
        }
    return tong;
}

int main()
{
    int n;
    cin >> n;
    int k = hdpe(n);
    if(k < n)
        cout << "NO " << k;
    if(k > n)
        cout << "YES " << k;
    return 0;
}
