#include <bits/stdc++.h>
using namespace std;
int demuoc(int x)
{
    int d=0;
    for(int i=1;i<=sqrt(x);i++)
        if(u%i==0)
    {
        d++;
        if(i!=u/i)
            d++;
    }
    return d;
}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
