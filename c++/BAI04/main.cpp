#include <bits/stdc++.h>
using namespace std;
bool laSoBacThang(int x)
{
    if (x <= 10) return false;
    string s = to_string(x);
    for (int i = 1; i < s.size(); i++)
        if (s[i] <= s[i - 1])
            return false;
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;
    cin >> N >> K;
    unordered_map<string, int> dem;

    for (int i = 0; i < N; i++)
    {
        string sdt;
        cin >> sdt;
        dem[sdt]++;
    }

    vector<string> ds(K);
    for (int i = 0; i < K; i++)
    {
        cin >> ds[i];
    }

    bool coKetQua = false;
    for (string &sdt : ds)
    {
        if (laSoBacThang(dem[sdt]))
        {
            cout << sdt << '\n';
            coKetQua = true;
        }
    }

    if (!coKetQua)
        cout << "0 0\n";
    return 0;
}
