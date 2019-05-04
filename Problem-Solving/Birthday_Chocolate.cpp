#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,d,m,x,sum=0;
    int a[105];
    cin>>n;
    a[0]=0;
    for(int i=1;i<=n;i++){
        cin>>x;
        sum+=x;
        a[i]=sum;
    }
    cin>>d>>m;
    int ck=0;
    for(int i=m;i<=n;i++){
        if((a[i]-a[i-m])==d)
            ck++;
    }

    cout<<ck<<endl;

    return 0;
}
