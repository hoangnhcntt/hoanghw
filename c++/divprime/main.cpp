#include <bits/stdc++.h>
using namespace std;
void phantich(int n, vector<int> &nt)
{
    for (int i = 2; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
        {
            nt.push_back(i);
            while (n % i == 0)
                n /= i;
        }
    }
    if (n > 1) nt.push_back(n);
}
int main()
{
    int a, b;
    cin >> a >> b;
    vector<int> fa, fb;
    phantich(a, fa);
    phantich(b, fb);
    int ucnn = -1;
    for (int i : fa)
        if (find(fb.begin(), fb.end(), i) != fb.end())
            ucnn = max(ucnn, i);

    if (ucnn == -1)
        cout <<"NONE";
    else
        cout <<ucnn;

    return 0;
}
