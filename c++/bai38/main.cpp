#include <bits/stdc++.h>
using namespace std;

long long n;

bool cp(long long k) {
    long long r = sqrt(k);
    return r * r == k;
}

int main() {
    cin >> n;
    int sl = 0;
    for(long long i = 1; i <= n; i++)
        if(cp(i))
            sl++;
    cout << sl;
    return 0;
}
