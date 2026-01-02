#include <bits/stdc++.h>
using namespace std;
int n,m,rmin;
int main()
{
    cin>>n>>m;
    rmin=n+m;
    string str1=to_string(n);
    string str2=to_string(m);
    replace(str1.begin(), str1.end(), '5', '6');
    replace(str2.begin(), str2.end(), '5', '6');
    int x=stoi(str1);
    int y=stoi(str2);
    cout <<rmin<<" "<<x+y;
    return 0;
}
