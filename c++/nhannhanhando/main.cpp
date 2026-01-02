#include <bits/stdc++.h>
using namespace std;
int nnad(int a,int b)
{
    int x=a/10;
    int y=a%10;
    int m=b/10;
    int n=b%10;
    int hang_tram=x*m;
    int hang_chuc=x*n+y*m;
    int hang_dv=y*n;
    return hang_tram+hang_chuc+hang_dv;
}
int amub(int a,int b)
{
    if(b%2==0)
    {
        return pow((pow(a,b/2)),2);
    }
    else return a*pow((pow(a,(b-1)/2)),2);
}
int main()
{
    cout<<nnad(a,b);
    cout<<amub(a,b);
    return 0;
}
