#include <bits/stdc++.h>
using namespace std;
string s;
char x;
int sl=0;
int main()
{
    getline(cin,s);
    cin>>x;
    for(char c:s)
        if(c==x)
            sl++;
    cout <<sl;
    return 0;
}
