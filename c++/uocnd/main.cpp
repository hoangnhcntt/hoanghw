#include <bits/stdc++.h>
using namespace std;
long long X;
vector<long long> uoc;

int main()
{
    cin >> X;
    for (long long i = 1; i * i <= X; i++)
    {
        if (X % i == 0)
        {
            long long j = X / i;
            uoc.push_back(i);
            if (i != j)
                uoc.push_back(j);
        }
    }
    sort(uoc.begin(), uoc.end());
    for (long long x : uoc)
        cout << x << "\n";
}
