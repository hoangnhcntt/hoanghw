#include<bits/stdc++.h>
using namespace std;
bool ktra(float a, float b, float c)
{
    if ((a+b > c) && (a+c > b) && (b+c >a))
    {
        return true;
    }
    return false;
}
float cv(float a, float b, float c)
{
    return a + b + c;
}
float dt(float a, float b, float c)
{
    float p = cv(a, b, c);
    float P = p / 2.0;
    float s = sqrt(P*(P - a)*(P - b)*(P - c));
    return s;
}
int main()
{
    freopen("BAI24.INP","r",stdin);
    freopen("BAI24.OUT","w",stdout);
    float a, b, c;
    cin >> a >> b >> c;
    if(ktra(a, b, c) == false)
        cout << "NONE";
    else
    {
        float dttg = dt(a, b, c);
        cout<<fixed<<setprecision(2)<<dttg;
    }
    return 0;
}
