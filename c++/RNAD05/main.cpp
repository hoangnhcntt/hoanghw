#include <bits/stdc++.h>
using namespace std;
long long permutation_rank(int N, const vector<int>& a) {
    if (N == 0) return 1;
    vector<long long> factorial(N + 1);
    factorial[0] = 1;
    for (int i = 1; i <= N; ++i) {
        factorial[i] = factorial[i - 1] * i;
    }
    long long rank = 0;
    vector<bool> used(N + 1, false);
    for (int i = 0; i < N; ++i) {
        int current_element = a[i];
        long long count_smaller_unused = 0;
        for (int j = 1; j < current_element; ++j) {
            if (!used[j]) {
                count_smaller_unused++;
            }
        }
        int remaining_elements = N - 1 - i;
        rank += count_smaller_unused * factorial[remaining_elements];

        used[current_element] = true;
    }
    return rank + 1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    if (!(cin >> N)) return 0;
    vector<int> a(N);
    for (int i = 0; i < N; ++i) {
        if (!(cin >> a[i])) return 0;
    }
    long long result = permutation_rank(N, a);
    cout << result << endl;
    return 0;
}
