#include <bits/stdc++.h>
using namespace std;
int n,a,b,c,d;
bool kt(int x,int y,int z)
{
    if(a*x+b*y+c*z==d)
        return true;
    else
        return false;
}
int main()
{
    cin>>a>>b>>c>>d>>n;
    for(int x=0; x<=n; x++)
        for(int y=0; y<=n; y++)
            for(int z=0; z<=n; z++)
                if(kt(x,y,z)==true)
                    cout<<x<<" "<<y<<" "<<z<<endl;
    return 0;
}
