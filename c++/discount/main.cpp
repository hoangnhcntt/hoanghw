#include <bits/stdc++.h>
using namespace std;
int n;
int main()
{
    cin>>n;
    if(n<5)
        cout<<"KHACH BINH THUONG "<<n;
    else if(5<=n && n<10)
        cout<<"KHACH THAN THIET "<<n-n*5/100;
    else if(10<=n && n<20)
        cout<<"KHACH VIP "<<n-n*10/100;
    else if(20<=n && n<50)
        cout<<"KHACH VVIP "<<n-n*15/100;
    else if(n>50)
        cout<<"KHACH SUPER VIP "<<n-n*20/100;
    return 0;
}
