#include <bits/stdc++.h>
using namespace std;
using int128=__int128;
long long a,b;
long long g;
// code ngầu ko thầy, em vừa lên mạng học về cách sd int 128 xong hêhhe
void inraso(int128 x)
{
    if(x==0)
    {
        cout<<0;
        return;
    }
    bool dau=1;
    if(x<0)
    {
        dau=0;
        x=-x;
    }
    string s;
    while(x>0)
    {
        s.push_back(x%10+48);
        x/=10;
    }
    if(!dau)
    {
        cout<<"-";
    }
    reverse(s.begin(),s.end());
    cout<<s;
}
int main()
{
    cin>>a>>b;
    g=__gcd(a,b);
    int128 res;
    res =(int128)a/g*b;
    inraso(res);
    return 0;
}
