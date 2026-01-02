#include <bits/stdc++.h>
using namespace std;
int a,b,c;
int main()
{
    cin>>a>>b>>c;
    for(int x=0;x<=100;x++)
        for(int y=-100;y<=100;y++)
           if(a*x+b*y==c)
             cout<<"("<<x<<","<<y<<")"<<endl;
    return 0;
}
