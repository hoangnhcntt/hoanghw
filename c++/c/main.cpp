#include <bits/stdc++.h>
using namespace std;
bool nguyento(int u)
{
    if (u < 2) return false;
    for (int i = 2; i * i <= u; i++)
        if (u % i == 0)
            return false;
    return true;
}
bool sobt(int u)
{
    if(u<=10) return false;
    string su = to_string(u);
    if (su[0] < su[1])
    {
        for (int i = 0; i < su.size() - 1; i++)
            if (su[i] >= su[i + 1])
                return false;
    }
    else
    {
        for (int i = 0; i < su.size() - 1; i++)
            if (su[i] <= su[i + 1])
                return false;
    }
    int d = 0;
    for (int i = 0; i < su.size(); i++)
        d += su[i] - '0';

    return nguyento(d);
}

int main()
{
    int N;
    cin >> N;

    int Res = 0;
    for (int i = 1; i <= N; i++)
        if (sobt(i))
            Res++;
    cout << Res;
    return 0;
}
