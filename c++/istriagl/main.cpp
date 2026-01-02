#include <bits/stdc++.h>
using namespace std;
int a,b,c;
int main()
{
    cin>>a>>b>>c;
    if(a+b>c && b+c>a && c+a>b)
    {
        if(a==b && b==c) cout<<"deu";
        else if(a==b || a==c || b==c) cout<<"can";
        else if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==b*b+a*a)
            cout<<"vuong";
        else cout<<"thuong";
    }
    else
        cout<<"ko phai tam giac";
    return 0;
}
