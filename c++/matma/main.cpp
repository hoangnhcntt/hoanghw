#include <bits/stdc++.h>
using namespace std;
string reverseWords(const string & s)
{
    stringstream ss(s);
    string word, r;
    while (ss >> word)
    {
        reverse(word.begin(), word.end());
        r += word + " ";
    }
    if (!r.empty()) r.pop_back();
    return r;
}
string s;
int main()
{
    getline(cin,s);
    int tong=0;
    string moi;
    for (char x : s)
        if (isdigit(x))
            tong+=x-'0';
    for (char x : s)
        if (!isdigit(x))
            moi += x;
    cout<<tong<<" "<<reverseWords(moi);
    return 0;
}
