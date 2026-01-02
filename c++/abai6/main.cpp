#include <bits/stdc++.h>
using namespace std;
int x1,y11,x2,y2;
int main()
{

    cin>>x1>>y11>>x2>>y2;
    double d;
    d=1.0*sqrt(pow(x2-x1,2)+pow(y2-y11,2));
    cout << fixed<<setprecision(2) << d;
    return 0;
}
