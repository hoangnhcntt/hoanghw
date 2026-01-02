#include <bits/stdc++.h>
using namespace std;
int n;
int tongtien=0;
int main()
{
    cin>>n;
    int m=n;
    while(n>0)
    {
        if(1<=n && n<=50)
        {
            tongtien=n*600;
            n-=50;
        }
        else if(51<=n && n<=100)
        {
            tongtien=n*400;
            n-=50;
        }
        else if(100<=n && n<200)
        {
            tongtien=n*200;
            n-=50;
        }
    }
    if(m>200)
        cout<<tongtien-tongtien*10/100;
    else
        cout<<tongtien;
    return 0;
}
