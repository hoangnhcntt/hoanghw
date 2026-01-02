#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> a;
void qs(int l,int h)
{
    int i=l;
    int j=h;
    int chot=a[(i+j)/2];
    while(i<=j)
    {
        while(a[i]<chot)
            i++;
        while(a[j]>chot)
            j--;
        if(i<=j)
        {
            swap(a[i],a[j]);
            i++;
            j--;
        }
    }
    if(l<j) qs(l,j);
    if(i<h) qs(i,h);
}
int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        int k;
        cin>>k;
        a.push_back(k);
    }
    qs(0,n-1);
    for(auto x:a)
        cout <<x<<" ";
    return 0;
}
