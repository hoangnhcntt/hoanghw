#include <bits/stdc++.h>
using namespace std;
double n;
int main()
{
    freopen("AVERPOINT.INP","r",stdin);
    freopen("AVERPOINT.OUT","w",stdout);
    cin>>n;
    if(n>=8)
        cout<<"GIOI";
    else if(n>=6.5)
        cout<<"KHA";
    else if(n>=5)
        cout<<"TRUNG BINH";
    else if(n<5)
        cout<<"YEU";
    return 0;
}
