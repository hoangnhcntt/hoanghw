#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x)
{
    if (x < 2) return false;
    if (x == 2 || x == 3) return true;
    if (x % 2 == 0) return false;
    for (int i = 3; i * i <= x; i += 2)
        if (x % i == 0)
            return false;
    return true;
}

int uocnt(int x)
{
    int largest = -1;
    while (x % 2 == 0)
    {
        largest = 2;
        x /= 2;
    }
    for (int i = 3; i * i <= x; i += 2)
    {
        while (x % i == 0)
        {
            largest = i;
            x /= i;
        }
    }
    if (x > 1) largest = x;
    return largest;
}

int main()
{
    freopen("BLAZI.INP","r",stdin);
    freopen("BLAZI.OUT","w",stdout);
    string s, num = "";
    vector<int> numbers;
    int rmax = -1e9;
    getline(cin, s);
    for (char ch : s)
    {
        if (isdigit(ch))
        {
            num += ch;
        }
        else if (!num.empty())
        {
            numbers.push_back(stoi(num));
            num.clear();
        }
    }
    if (!num.empty()) numbers.push_back(stoi(num));

    for (int num : numbers)
        rmax = max(rmax, uocnt(num));
    cout << rmax << endl;
    return 0;
}
