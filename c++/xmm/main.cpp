#include <bits/stdc++.h>
using namespace std;
string s;
vector <int> a[10000];
int so;
int main()
{
    getline(cin,s);
    for(char x:s)
    {
        if(isdigit(x)==true)
        {
            so+=int(x-48);
            so*=10;
        }
        else
        {
            a.push_back(so);
            so=0;
        }
    }
    for(int x:a)
        cout<<x;
    return 0;
}
