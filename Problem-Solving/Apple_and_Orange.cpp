#include<bits/stdc++.h>
using namespace std;
//long long a1[100001],a2[100001];
int main()
{
    long long s,t,a,b,m,n,x,y,ck1=0,ck2=0;
    cin>>s>>t;
    cin>>a>>b;
    cin>>m>>n;
    for(int i=0;i<m;i++){
        cin>>x;
        if(x+a>=s && x+a<=t)
            ck1++;
    }
    for(int i=0;i<n;i++){
        cin>>y;
        if(b+y>=s && b+y<=t)
            ck2++;
    }

    cout<<ck1<<endl;
    cout<<ck2<<endl;

    return 0;
}
