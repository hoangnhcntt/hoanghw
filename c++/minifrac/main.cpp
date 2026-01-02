#include <bits/stdc++.h>
using namespace std;
int a,b,c,d;
int main()
{
    cin>>a>>b>>c>>d;
    int tu1=(a*d+b*c);
    int mau1=b*d;
    int tu2=(a*d-b*c);
    int mau2=b*d;
    int chung1=__gcd(tu1,mau1);
    int chung2=__gcd(tu2,mau2);
    cout <<tu1/chung1<<" "<<mau1/chung1;
    cout<<endl;
    cout<<tu2/chung2<<" "<<mau2/chung2;
    return 0;
}
