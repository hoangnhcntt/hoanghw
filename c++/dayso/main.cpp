#include <bits/stdc++.h>
using namespace std;
char s[1001], s1[1001];
int n, vt = -1;
int main()
{
    cin >> s;
    n = strlen(s);
    for (int i = 1; i <= n; i++)
    {
        while (vt >= 0 && s1[vt] < s[i])
        {
            vt--;
        }
        s1[++vt] = s[i];
    }
    for (int i = 0; i <= vt; i++)
        cout << s1[i];
    return 0;
}
