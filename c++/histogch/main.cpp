#include <bits/stdc++.h>
using namespace std;
string str;
string s1;
string s2;
int c[100000],k=0,d[100000];
int dem;
void sxc()
{
    for(int i=1; i<=k-1; i++)
    {
        int jmin=i;
        for(int j=i+1; j<=k; j++)
            if(d[jmin]>d[j])
                jmin=j;
        swap(d[i],d[jmin]);
        swap(c[i],c[jmin]);
        swap(s2[i-1],s2[jmin-1]);
    }
}
int main()
{

    getline(cin, str);
    s1=str;
    sort(str.begin(),str.end());
    dem=1;
    for(int i=0; i<=str.size()-1; i++)
    {
        if(str[i]==str[i+1])dem++;
        else
        {
            s2=s2+str[i];
            c[++k]=dem;
            dem=1;
        }
    }
    for(int i=1; i<=k; i++)
        d[i]=s1.find(s2[i-1]);
    sxc();
    for(int i=1; i<=k; i++)
        cout<<s2[i-1]<<" "<<c[i]<<endl;
    return 0;
}
